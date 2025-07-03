//该类由 [Zero → 自动生成代码 → Assets资源名生成] 工具自动创建
using System.Collections.Generic;
namespace Zero
{
    /// <summary>
    /// [自动生成的]AssetBundle数据
    /// </summary>
    public sealed class AB
    {
        
		/// <summary>
		/// @ab根目录下资源
		/// </summary>
		public sealed class ROOT_ASSETS
		{
			public const string NAME = "root_assets.ab";

			public const string ILContent = "ILContent.prefab";            
		}

		public sealed class COMMONS
		{
			public const string NAME = "commons.ab";

			public const string MsgWin = "MsgWin.prefab";            
		}

		public sealed class PREFAB
		{
			public const string NAME = "prefab.ab";

			public const string MainPanel = "MainPanel.prefab";            
		}

		public sealed class SCENES
		{
			public const string NAME = "scenes.ab";

			public const string Scene0_unity = "Scene0.unity";
			public const string Scene1_unity = "Scene1.unity";            
		}

 /// <summary>
        /// 创建视图的AssetBundle查找表（多个视图同名的话，则表中没有该视图的记录，因为不精确）
        /// </summary>
		public static Dictionary<string,string> CreateViewAssetBundleSearchDictionary()
        {
			var dic = new Dictionary<string, string>();
			dic["ILContent"] = "root_assets.ab";
			dic["MsgWin"] = "commons.ab";
			dic["MainPanel"] = "Prefab.ab";
			return dic;
        }
    }
}
