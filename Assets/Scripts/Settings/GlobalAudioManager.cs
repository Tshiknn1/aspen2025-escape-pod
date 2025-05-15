using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalAudioManager : MonoBehaviour
{
    public static GlobalAudioManager Instance;

    private bool isRealGlobalAudioManager = false;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            isRealGlobalAudioManager = true;
        }
    }

    private void Start()
    {
        if (isRealGlobalAudioManager)
        {
            AkSoundEngine.PostEvent("Play_TopLevelMusicContainer", gameObject);
            AkSoundEngine.PostEvent("Play_TopLevelAmbientContainer", gameObject);
            AkSoundEngine.SetState("GameMode", "Title");
            AkSoundEngine.SetState("Biome", "None");
        }
        
    }
}