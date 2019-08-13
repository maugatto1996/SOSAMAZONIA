using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Explosao : MonoBehaviour
{
    public void TerminouAnimacao()
    {
        GameController gc = GameObject.FindWithTag("GameController").GetComponent<GameController>();
        gc.OnGameOver();
    }
    
}
