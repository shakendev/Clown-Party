using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BugsnagUnity;

public class BugsnagScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Bugsnag.Notify(new System.InvalidOperationException("Test error"));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
