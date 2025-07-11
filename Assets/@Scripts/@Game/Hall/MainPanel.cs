using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Zero;
using ZeroGameKit;
public class MainPanel : AView
{
    public MainCell Image;
    public Transform obj;
    public Text txtName;
    protected override void OnEnable()
    {
       Debug.Log("11111222");
       txtName.text = "狠狠的热";
       Image.Show();
       //Debug.Log(transform.GetComponent<MainPanel>());
       Debug.Log(obj.name);
    }
}
