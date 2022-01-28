using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

[Serializable]
public class GameTraces
{
    public System.DateTime dateOfPlay;
    public float leftTriggerPressure;
    public Vector3 leftTargetPosition;
    public Vector3 rightControllerPosition;

    //public void saveGameTraces() {
    //    string json = JsonUtility.ToJson(this);
    //    File.WriteAllText(@"D:\path.json", json);
    //}
}
