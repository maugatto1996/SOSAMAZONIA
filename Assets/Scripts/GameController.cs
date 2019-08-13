using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public GameObject gameHUD;
    public GameObject MenuPause;
    public GameObject MenuGameOver;
    public GameObject MenuGameWin;

    private bool isPause;

    private void Aweke()
    {
        Time.timeScale = 1;
    }

    void Start()
    {
        isPause = false;
        MenuPause.SetActive(false);
        MenuGameWin.SetActive(false);
        MenuGameOver.SetActive(false);
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Return))
        {
            PauseManager();
        }

    }

    private void PauseManager()
    {
        isPause = !isPause;
        if(isPause)
        {
            OnPaused();
        }
        else
        {
            OnResume();
        }
    }

    private void OnPaused()
    {
        MenuPause.SetActive(true);
        gameHUD.SetActive(false);
        Time.timeScale = 0;
    }

    private void OnResume()
    {
        MenuPause.SetActive(false);
        gameHUD.SetActive(true);
        Time.timeScale = 1;
    }

    public void OnGameOver()
    {
        MenuGameOver.SetActive(true);
        gameHUD.SetActive(false);
        Time.timeScale = 0;
    }

    public void OnGameWin()
    {
        MenuGameWin.SetActive(true);
        gameHUD.SetActive(false);        
    }

    public void Resume()
    {
        OnResume();
    }

    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void Sair()
    {
        SceneManager.LoadScene("Intro");
    }



}
