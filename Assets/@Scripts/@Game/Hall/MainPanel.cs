using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zero;
using ZeroGameKit;
public class MainPanel : AView
{
    public MainCell Image;
    public Transform obj;
    protected override void OnEnable()
    {
       Debug.Log("11111");
       Debug.Log(transform.GetComponent<MainPanel>());
       Debug.Log(obj.name);
       Image.Show();
    }
}
