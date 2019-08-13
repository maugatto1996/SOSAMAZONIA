using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform Player;
    public float zoomMinimo = 15f;
    public float zoomMaximo = 4f;
    public float intervalo = 0.1f;
    private Camera minhaCamera;
    private float velocidadeZoom;
    private Vector3 velocidadeMovimento;

    void Start()
    {
        minhaCamera = GetComponent<Camera>();    
    }

    void Update()
    {
        if(Player != null)
        {
            if(Player.position.y > 0)
            {
                minhaCamera.orthographicSize = Mathf.SmoothDamp(minhaCamera.orthographicSize, zoomMinimo, ref velocidadeZoom, intervalo);
            }
            else
            {
                Vector3 novaPosição = new Vector3(Player.position.x, Player.position.y, -10);

                transform.position = Vector3.SmoothDamp(transform.position, novaPosição, ref velocidadeMovimento, intervalo);

                minhaCamera.orthographicSize = Mathf.SmoothDamp(minhaCamera.orthographicSize, zoomMaximo, ref velocidadeZoom, intervalo);
            }
        }

        
        
    }
}
