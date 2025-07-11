﻿using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace Zero
{
    /// <summary>
    /// 视图工厂
    /// </summary>
    public sealed class ViewFactory
    {
        private static readonly Type ViewRegisterAttr = typeof(ViewRegisterAttribute);
        
        static Dictionary<string,string> _viewABViewDic;

        static ViewFactory()
        {
            AddDic();
        }

        public static void AddDic()
        {
            if(_viewABViewDic!=null)
                return;
            _viewABViewDic = AB.CreateViewAssetBundleSearchDictionary();
        }

        /// <summary>
        /// 查找Type对应的AB信息
        /// </summary>
        /// <param name="type"></param>
        /// <param name="abName"></param>
        /// <param name="viewName"></param>
        /// <returns></returns>
        static bool FindAssetBundleInfo(Type type, out string abName, out string viewName)
        {
            var attrs = type.GetCustomAttributes(ViewRegisterAttr, false);
            if (attrs.Length == 0)
            {
                // if (_viewABViewDic == null)
                // {
                //     _viewABViewDic = AB.CreateViewAssetBundleSearchDictionary();
                // }
                Debug.Log(_viewABViewDic);
                //从自动表查找
                if (false == _viewABViewDic.ContainsKey(type.Name))
                {
                    abName = null;
                    viewName = null;
                    return false;
                }
                
                viewName = type.Name;
                abName = _viewABViewDic[viewName];

               // Assets.SeparateAssetPath(prefabPath, out abName, out viewName);
            }
            else
            {
                var attr = attrs[0] as ViewRegisterAttribute;
                Assets.SeparateAssetPath(attr.prefabPath, out abName, out viewName);
            }

            return true;
        }

        /// <summary>
        /// 创建视图
        /// </summary>
        /// <param name="type"></param>
        /// <param name="prefab"></param>
        /// <param name="parent"></param>
        /// <param name="data"></param>
        /// <returns></returns>
        public static AView Create(Type type, GameObject prefab, Transform parent, object data = null)
        {
            GameObject go = GameObject.Instantiate(prefab, parent);
            go.name = prefab.name;

            AView view = Activator.CreateInstance(type) as AView;
            view.SetGameObject(go, data, TryGetPrefabPath(prefab));
            return view;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="prefab"></param>
        /// <param name="parent"></param>
        /// <param name="data"></param>
        /// <returns></returns>
        public static T Create<T>(GameObject prefab, Transform parent, object data = null) where T : AView
        {
            AView view = Create(typeof(T), prefab, parent, data);
            return view as T;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="type"></param>
        /// <param name="abName"></param>
        /// <param name="viewName"></param>
        /// <param name="parent"></param>
        /// <param name="data"></param>
        /// <returns></returns>
        public static AView Create(Type type, string abName, string viewName, Transform parent, object data = null)
        {
            GameObject prefab = Assets.Load<GameObject>(abName, viewName);
            return Create(type, prefab, parent, data);
        }

        public static T Create<T>(string abName, string viewName, Transform parent, object data = null) where T : AView
        {
            GameObject prefab = Assets.Load<GameObject>(abName, viewName);
            return Create<T>(prefab, parent, data);
        }

        public static AView Create(Type type, Transform parent, object data = null)
        {
            string abName, viewName;
            if (FindAssetBundleInfo(type, out abName, out viewName))
            {
                return Create(type, abName, viewName, parent, data);
            }
            else
            {
                Debug.LogErrorFormat("AView类[{0}]并没有适用的视图。请检查是否配置或生成了资源名清单", type.FullName);
            }

            return null;
        }

        public static T Create<T>(Transform parent, object data = null) where T : AView
        {
            Type type = typeof(T);
            return Create(type, parent, data) as T;
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="viewType">AView的子类</param>
        /// <param name="assetPath">资源的路径</param>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<AView> CreateAsync(Type viewType, string assetPath, Transform parent, object data = null, Action<AView> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null)
        {
            Assets.SeparateAssetPath(assetPath, out var abName, out var assetName);
            return await CreateAsync(viewType, abName, assetName, parent, data, onCreated, onResProgress, onResLoaded);
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="viewType">AView的子类</param>
        /// <param name="abName">资源所在的AB文件</param>
        /// <param name="viewName">资源的名称</param>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<AView> CreateAsync(Type viewType, string abName, string viewName, Transform parent, object data = null, Action<AView> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null)
        {
            if (false == viewType.IsSubclassOf(typeof(AView)))
            {
                throw new Exception($"[Zero][View] {viewType.FullName} 并不是AView的子类");
            }

            var prefab = await Assets.LoadAsync<GameObject>(abName, viewName, null, onResProgress);
            onResLoaded?.Invoke(prefab);
            var view = Create(viewType, prefab, parent, data);
            onCreated?.Invoke(view);
            return view;
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="viewType">AView的子类</param>
        /// <param name="assetPath">资源的路径</param>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<T> CreateAsync<T>(string assetPath, Transform parent, object data = null, Action<T> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null) where T : AView
        {
            var view = await CreateAsync(typeof(T), assetPath, parent, data, null, onResProgress, onResLoaded) as T;
            onCreated?.Invoke(view);
            return view;
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="viewType">AView的子类</param>
        /// <param name="abName">资源所在的AB文件</param>
        /// <param name="viewName">资源的名称</param>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<T> CreateAsync<T>(string abName, string viewName, Transform parent, object data = null, Action<T> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null) where T : AView
        {
            var view = await CreateAsync(typeof(T), abName, viewName, parent, data, null, onResProgress, onResLoaded) as T;
            onCreated?.Invoke(view);
            return view;
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="viewType">AView的子类</param>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<AView> CreateAsync(Type viewType, Transform parent, object data = null, Action<AView> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null)
        {
            bool isSuccess = FindAssetBundleInfo(viewType, out var abName, out var viewName);
            if (false == isSuccess)
            {
                Debug.LogErrorFormat("AView类[{0}]并没有适用的视图", viewType.FullName);
            }

            return await CreateAsync(viewType, abName, viewName, parent, data, onCreated, onResProgress, onResLoaded);
        }

        /// <summary>
        /// 异步创建视图
        /// </summary>
        /// <param name="parent">创建视图的父节点</param>
        /// <param name="data">传递的数据</param>
        /// <param name="onCreated">视图创建完成的回调</param>
        /// <param name="onResProgress">视图资源的加载进度回调</param>
        /// <param name="onResLoaded">视图资源加载完成的回调(会在onCreated之前触发)</param>
        /// <returns></returns>
        public static async UniTask<T> CreateAsync<T>(Transform parent, object data = null, Action<T> onCreated = null, Action<float> onResProgress = null, Action<UnityEngine.Object> onResLoaded = null) where T : AView
        {
            var view = await CreateAsync(typeof(T), parent, data, null, onResProgress, onResLoaded) as T;
            onCreated?.Invoke(view);
            return view;
        }

        #region GameObject和AView对象的绑定

        /// <summary>
        /// 为gameObject绑定一个AView实例
        /// </summary>
        /// <param name="gameObject"></param>
        /// <param name="data"></param>
        /// <typeparam name="T"></typeparam>
        public static T Binding<T>(GameObject gameObject, object data = null) where T : AView
        {
            var childView = Binding(typeof(T), gameObject, data);

            if (null == childView)
            {
                return default;
            }

            return childView as T;
        }

        /// <summary>
        /// 为gameObject绑定一个AView实例
        /// </summary>
        /// <param name="type"></param>
        /// <param name="childGameObject"></param>
        /// <param name="data"></param>
        /// <returns></returns>
        /// <exception cref="Exception"></exception>
        public static AView Binding(Type type, GameObject childGameObject, object data = null)
        {
            if (null == childGameObject)
            {
                return null;
            }

            if (false == type.IsSubclassOf(typeof(AView)))
            {
                throw new Exception(string.Format("[{0}]并不是AView的子类", type.FullName));
            }

            AView viewChild = Activator.CreateInstance(type) as AView;
            viewChild!.SetGameObject(childGameObject, data, TryGetPrefabPath(childGameObject));
            return viewChild;
        }

        #endregion

        /// <summary>
        /// 尝试获取预制体的资源路径
        /// </summary>
        /// <param name="gameObject"></param>
        /// <returns></returns>
        public static string TryGetPrefabPath(GameObject gameObject)
        {
            string prefabPath = null;
#if UNITY_EDITOR

            // string FindRootPrefabPath(GameObject obj)
            // {
            //     //递归找到父节点的预制体
            //     var parent = obj.transform.parent;
            //     while (parent)
            //     {
            //         var zv = parent.GetComponent<ZeroView>();
            //         if (zv && zv.PrefabPath != null)
            //         {
            //             return zv.PrefabPath;
            //         }
            //
            //         parent = parent.parent;
            //     }
            //
            //     return null;
            // }

            if (Runtime.IsUseAssetDataBase)
            {
                GameObject originalPrefab = UnityEditor.PrefabUtility.GetCorrespondingObjectFromOriginalSource(gameObject);
                if (originalPrefab)
                {
                    prefabPath = UnityEditor.AssetDatabase.GetAssetPath(originalPrefab);
                }
                // else
                // {
                //     prefabPath = FindRootPrefabPath(gameObject);
                // }
            }
            // else
            // {
            //     string[] guids = UnityEditor.AssetDatabase.FindAssets($"t:Prefab {gameObject.name} ");
            //     List<string> assetPathList = new List<string>();
            //     foreach (var guid in guids)
            //     {
            //         var assetPath = UnityEditor.AssetDatabase.GUIDToAssetPath(guid);
            //         if (Path.GetFileNameWithoutExtension(assetPath) == gameObject.name)
            //         {
            //             assetPathList.Add(assetPath);
            //         }
            //     }
            //
            //     if (1 == assetPathList.Count)
            //     {
            //         prefabPath = assetPathList[0];
            //     }
            //     else if (0 == assetPathList.Count)
            //     {
            //         prefabPath = FindRootPrefabPath(gameObject);
            //     }
            // }
#endif
            return prefabPath;
        }
    }
}