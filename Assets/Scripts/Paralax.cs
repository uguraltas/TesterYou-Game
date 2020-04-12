using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paralax : MonoBehaviour
{
    private float lenght;
    private float startpos;
    public GameObject cam;
    public float paralaxEffect;
    void Start()
    {
        startpos = transform.position.x;
        lenght = GetComponent<SpriteRenderer>().bounds.size.x;
    }

    // Update is called once per frame
    void Update()
    {
        float dist = (cam.transform.position.x * paralaxEffect);
        transform.position = new Vector3(startpos + dist, transform.position.y, transform.position.z); 
        
    }
}
