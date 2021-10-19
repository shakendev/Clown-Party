using System.Collections;
using System;
using UnityEngine;
using UnityEngine.iOS;
using UnityEngine.SceneManagement;
using UnityEngine.UI;



// Main Menu Buttons Handler
public class MainMenuButtonsHandler: MonoBehaviour
{

    public Button playGameButton;
    public Button quitGameButton;

    // Setup script once
    void Start()
    {
        playGameButton = GameObject.Find("playBtn").GetComponent<Button>();
        quitGameButton = GameObject.Find("quitBtn").GetComponent<Button>();
    }


    // Update per every frame
    void Update()
    {

        if (Input.touchCount > 0)
        {

            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Ended)
            {

                // Play Game Button Touch Event Handler
                if (this.isButtonTouched(touch, playGameButton))
                {
                    Console.WriteLine("PlayGameButton was pressed");
                    Console.WriteLine("Touched Position X: " + touch.position.x);
                    Console.WriteLine("Button Position X1: " + playGameButton.transform.position.x);
                    Console.WriteLine("Button Position X2: " + (playGameButton.transform.position.x + playGameButton.GetComponent<RectTransform>().rect.width));
                    Console.WriteLine("Touched Position Y: " + touch.position.y);
                    Console.WriteLine("Button Position Y1: " + playGameButton.transform.position.y);
                    Console.WriteLine("Button Position Y2: " + (playGameButton.transform.position.y + playGameButton.GetComponent<RectTransform>().rect.height));
                    SceneManager.LoadScene("GameScene");
                }

                // Quit Game Button Touch Event Handler
                if (this.isButtonTouched(touch, quitGameButton)) {
                    Console.WriteLine("QuitGameButton was pressed");
                    Console.WriteLine("Touched Position X: " + touch.position.x);
                    Console.WriteLine("Button Position X1: " + playGameButton.transform.position.x);
                    Console.WriteLine("Button Position X2: " + (playGameButton.transform.position.x + playGameButton.GetComponent<RectTransform>().rect.width));
                    Console.WriteLine("Touched Position Y: " + touch.position.y);
                    Console.WriteLine("Button Position Y1: " + playGameButton.transform.position.y);
                    Console.WriteLine("Button Position Y2: " + (playGameButton.transform.position.y + playGameButton.GetComponent<RectTransform>().rect.height));
                    Application.Quit();
                }

            }

        }

    }

    private bool isButtonTouched(Touch currentTouch, Button currentButton)
    {
        if ((currentTouch.position.x >= currentButton.transform.position.x) &&
            (currentTouch.position.x <= (currentButton.transform.position.x + currentButton.GetComponent<RectTransform>().rect.width)) &&
            (currentTouch.position.y >= currentButton.transform.position.y) &&
            (currentTouch.position.y <= (currentButton.transform.position.y + currentButton.GetComponent<RectTransform>().rect.height)))
        {
            return true;
        }
        return false;
    }
}
