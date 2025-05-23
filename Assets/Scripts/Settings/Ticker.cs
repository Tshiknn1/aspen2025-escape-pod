using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Ticker : MonoBehaviour
{
    public static Ticker Instance;

    [SerializeField] private float tickDuration = 0.2f;
    private float tickTimer;

    public Action OnTick = delegate { };

    private void Awake()
    {
        if (Instance != null) Destroy(Instance.gameObject); 
        Instance = this;
    }

    private void Update()
    {
        tickTimer += Time.deltaTime;

        if(tickTimer > tickDuration)
        {
            tickTimer = 0f;

            OnTick?.Invoke();
        }
    }
}
