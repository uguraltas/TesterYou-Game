using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthScript : MonoBehaviour
{
    public static int HealthValue = 100;
    private Text health;
    void Start()
    {
        health = GetComponent<Text>();
    }

    void Update()
    {
        health.text = "Health:" + HealthValue;
    }
}
