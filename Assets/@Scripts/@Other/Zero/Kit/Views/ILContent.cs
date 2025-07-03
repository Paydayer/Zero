using UnityEngine;
using UnityEngine.UI;
using Zero;
using Zero;

namespace ZeroGameKit
{
    public class ILContent : AView
    {
        protected override void OnInit(object data)
        {
            base.OnInit(data);

            CameraMgr.Ins.RegisterUICamera(transform.Find("UICamera").GetComponent<Camera>());

            var stage = CreateChildView<StageMgr>("Stage");
            var uiPanel = CreateChildView<UIPanelMgr>("UICanvas/UIPanel");
            var uiWin = CreateChildView<UIWinMgr>("UICanvas/UIWin");

            var panel = UIPanelMgr.Ins.Switch<MainPanel>(null);
            Debug.Log("是否为空"+panel);
        }
    }
}
