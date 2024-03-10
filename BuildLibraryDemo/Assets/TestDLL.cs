using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestDLL : MonoBehaviour
{
    // Use this for initialization
    void Start()
    {

        Debug.Log(LibRecast.TestAPI().ToString());
        Debug.Log(LibRecast.CalcDistance(1, 5, 3, 4).ToString());

        Debug.Log(Mathf.Sqrt((1 - 3) * (1 - 3) + (2 - 4) * (2 - 4)));
    }

    // Update is called once per frame
    void Update()
    {

    }
}
