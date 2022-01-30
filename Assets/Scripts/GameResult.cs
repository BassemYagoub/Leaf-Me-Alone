using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

[Serializable]
public class GameResult
{
    public float timePlayed;
    public long dateOfPlay;
    public int playerLevel;
    public int nbEnemies;
    public int nbEnemiesBeaten;
    public int nbObstacles;
    public int nbObstaclesBeaten;
    public int nbVerticalEnemies;
    public int nbVerticalEnemiesBeaten;
    public int nbHorizontalEnemies;
    public int nbHorizontalEnemiesBeaten;

    //public GameResult importGameResult(string JSONfile) {
    //    return JsonUtility.FromJson<GameResult>(JSONfile);
    //}

    //public void saveGameResult() {
    //    string json = JsonUtility.ToJson(this);
    //    File.WriteAllText(@"D:\path.json", json);
    //}

}
