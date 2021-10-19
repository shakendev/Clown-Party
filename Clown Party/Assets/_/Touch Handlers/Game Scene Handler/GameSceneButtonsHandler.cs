using System.Collections;
using System;
using UnityEngine;
using UnityEngine.iOS;
using UnityEngine.SceneManagement;
using UnityEngine.UI;



// Game Scene Buttons Handler
public class GameSceneButtonsHandler : MonoBehaviour
{

    public GameObject inputManager;


    public FloatingJoystick leftFloatingJoystick;
    public FloatingJoystick rightFloatingJoystick;



    void Start()
    {
        this.inputManager = GameObject.Find("InputManager");
    }

    void Update()
    {

        float leftFloatingJoystickX = leftFloatingJoystick.Horizontal;
        float leftFloatingJoystickY = leftFloatingJoystick.Vertical;

        //this.inputManager.movementVector = normalized(vector3(leftFloatingJoystickX, leftFloatingJoystickY));

        //vector3 leftVector = vector3(leftFloatingJoystickX, leftFloatingJoystickY);

    }

}
