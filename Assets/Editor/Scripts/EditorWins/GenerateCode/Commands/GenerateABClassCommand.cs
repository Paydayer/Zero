using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Jing;
using UnityEngine;
using Zero;

namespace ZeroEditor
{
    class GenerateABClassCommand : BaseGenerateTemplateCodeCommand
    {
        /// <summary>
        /// AB名称类模板文件位置
        /// </summary>
        public const string TEMPLATE_FILE = "Assets/Editor/Configs/AssetBundleNameClassTemplate.txt";

        /// <summary>
        /// 导出类位置
        /// </summary>
        public const string OUTPUT_FILE = "Assets/@Scripts/@Other/Generated/AB.cs";

        string _mainClassT;
        string _explainT;
        string _classT;
        string _fieldT;
        string _dicAddT;

        public readonly List<AssetBundleItemVO> abList;

        private HashSet<string> _assetPathSet;

        public GenerateABClassCommand(List<AssetBundleItemVO> abList)
        {
            this.abList = abList;
        }

        public override void Excute()
        {
            //HashSet是一个不包含重复元素的集合，适合用来存储"唯一性"的数据
            //1，自动去重，重复添加不会抛异常 2，无序
            _assetPathSet = new HashSet<string>();
            //OUTPUT_FILE = Assets/@Scripts/@Other/Generated/AB.cs
            //Directory.GetParent返回路径的父目录，这里dir就是Assets/@Scripts/@Other/Generated
            var dir = Directory.GetParent(OUTPUT_FILE);
            if (false == dir.Exists)
            {
                dir.Create();
            }
            //指定位置读取文件，分隔符TEMPLATE_SPLIT的值是"------------------------------Split--------------------------------"
            var template = File.ReadAllText(TEMPLATE_FILE).Split(new string[] { TEMPLATE_SPLIT }, StringSplitOptions.RemoveEmptyEntries);
            ////AB主模板,
            _mainClassT = template[0];
            //// 类模板的注释
            _explainT = template[1];
            ////类模板 
            _classT = template[2];
            ////类模板里面每个字段的模板
            _fieldT = template[3].TrimEnd();
            //类字典的模板
            _dicAddT = template[4].TrimEnd();

            string classContent;
            //Path.GetFileNameWithoutExtension获取文件路径中的文件名（不含扩展名）
            //mainClassName = AB
            var mainClassName = Path.GetFileNameWithoutExtension(OUTPUT_FILE);
            //替换模板的类名
            classContent = _mainClassT.Replace(CLASS_NAME_FLAG, mainClassName);
            //替换AB模板里面的[CLASS LIST]。将AB包的数据替换
            classContent = classContent.Replace(CLASS_LIST_FLAG, GenerateClassList());
             //增加持有AB的字典
             classContent = classContent.Replace("[KEY VALUE LIST]", GenerateKeyValueList());
            // classContent = classContent.Replace("[UNIQUE ASSET PATH]", GenerateUniqueAssetPath());

            File.WriteAllText(OUTPUT_FILE, classContent);
        }

        /// <summary>
        /// 对名称唯一的资源，生成可以直接定位的常量，用来快速定位资源
        /// </summary>
        /// <returns></returns>
        private string GenerateUniqueAssetPath()
        {
            //文件名使用次数记录表
            Dictionary<string, int> fileNameUsedCountDict = new Dictionary<string, int>();
            //文件名刀路径的映射表
            Dictionary<string, string> fileNameToPathDict = new Dictionary<string, string>();

            #region 找出每个文件名的使用次数

            foreach (var assetPath in _assetPathSet)
            {
                var fileName = Path.GetFileName(assetPath);
                fileNameToPathDict[fileName] = assetPath;
                if (!fileNameUsedCountDict.TryAdd(fileName, 1))
                {
                    fileNameUsedCountDict[fileName]++;
                }
            }

            #endregion
            
            const string tabStr = "\t";
            string template = StringUtility.Remove(_fieldT, _fieldT.IndexOf(tabStr, StringComparison.Ordinal), tabStr.Length);
            StringBuilder sb = new StringBuilder();
            foreach (var kv in fileNameUsedCountDict)
            {
                if (1 == kv.Value)
                {
                    var filed = GenerateFiled(kv.Key, fileNameToPathDict[kv.Key], template);
                    sb.Append(filed);
                }
                else
                {
                    Debug.LogWarning($"[AB] 文件名重复，无法生成直接定位：{kv.Key}");
                }
            }

            return sb.ToString();
        }

        /// <summary>
        /// 创建视图的AssetBundle查找表（多个视图同名的话，则表中没有该视图的记录，因为不精确）
        /// </summary>
        string GenerateKeyValueList()
        {
            HashSet<string> repeatViewNameSet = new HashSet<string>();
            Dictionary<string, string> dic = new Dictionary<string, string>();

            foreach (var vo in abList)
            {
                foreach (var viewName in vo.assetList)
                {
                    var ext = Path.GetExtension(viewName);
                    if (ext.Equals(".prefab"))
                    {
                        string fieldName = Path.GetFileNameWithoutExtension(viewName);
                        if (dic.ContainsKey(fieldName))
                        {
                            repeatViewNameSet.Add(fieldName);
                            continue;
                        }

                        dic[fieldName] = vo.assetbundle;
                    }
                }
            }

            //剔除重名的view
            foreach (var viewName in repeatViewNameSet)
            {
                dic.Remove(viewName);
            }

            StringBuilder sb = new StringBuilder();
            foreach (var kv in dic)
            {
                sb.Append(_dicAddT.Replace(FIELD_NAME_FLAG, kv.Key).Replace(FIELD_VALUE_FLAG, kv.Value));
            }

            return sb.ToString();
        }

        string GenerateClassList()
        {
            StringBuilder sb = new StringBuilder();

            foreach (var vo in abList)
            {
                if (0 == vo.assetList.Count)
                {
                    continue;
                }

                var classContent = GenerateClass(vo);
                sb.Append(classContent);
                //sb.AppendLine();
            }

            return sb.ToString();
        }

        string GenerateClass(AssetBundleItemVO vo)
        {
            //获取Ab的资源，替换对应Ab类里面的[FIELD LIST]
            var fieldList = GenerateFieldList(vo.assetbundle, vo.assetList);

            var content = _classT;
            //替换类模板的类名
            content = content.Replace(CLASS_NAME_FLAG, vo.GetFieldName());
            //替换类模板生成的类里面的内容
            content = content.Replace(FIELD_LIST_FLAG, fieldList);
            //如果有注释替换掉注释
            if (string.IsNullOrEmpty(vo.explain))
            {
                content = content.Replace(EXPLAIN_FLAG, "");
            }
            else
            {
                content = content.Replace(EXPLAIN_FLAG, _explainT.Replace(EXPLAIN_FLAG, vo.explain));
            }

            return content;
        }

        string GenerateFieldList(string abName, List<string> viewNameList)
        {
            //因为Unity构建AssetBundle时，会将大写转换为小写，所以这里同样的做一个名字转换为小写的处理
            abName = abName.ToLower();

            var abNameWithoutExt = abName;
            //ZeroConst.AB_EXTENSION = “。ab”
            if (abNameWithoutExt.EndsWith(ZeroConst.AB_EXTENSION))
            {
                abNameWithoutExt = abName.Substring(0, abName.Length - ZeroConst.AB_EXTENSION.Length);
            }

            StringBuilder sb = new StringBuilder();

            //这里是创建这个类代表的ab包的名字
            sb.Append(GenerateFiled("NAME", abName));
            //字符串末尾追加一行文本，并自动添加换行符（\n或\r\n,取决于平台）
            sb.AppendLine();

            //这里是创建Ab包下每个资源的对应的字段
            foreach (var viewName in viewNameList)
            {
                //Path.GetFileNameWithoutExtension获取文件路径中的文件名（不含扩展名）
                //获取资源名
                string fieldName = Path.GetFileNameWithoutExtension(viewName);
                //获取文件的扩展名
                var ext = Path.GetExtension(viewName);
                //如果扩展名不等于.prefab
                if (false == ext.Equals(".prefab"))
                {
                    fieldName = string.Format("{0}_{1}", fieldName, ext.Replace(".", ""));
                }
                //用字段模板创建字段
                sb.Append(GenerateFiled(fieldName, viewName));
                //添加全名
                // var assetPath = ResMgr.LinkAssetPath(abNameWithoutExt, viewName);
                // sb.Append(GenerateFiled(fieldName + "_assetPath", assetPath));

                // if (!_assetPathSet.Add(assetPath))
                // {
                //     throw new Exception($"不应该出现重复的AssetPath: {assetPath} !!!");
                // }
            }

            return sb.ToString();
        }

        string GenerateFiled(string fieldName, string fieldValue, string template = null)
        {
            if (null == template)
            {
                template = _fieldT;
            }

            fieldName = MakeFieldNameRightful(fieldName);
            return template.Replace(FIELD_NAME_FLAG, fieldName).Replace(FIELD_VALUE_FLAG, fieldValue);
        }
    }
}