﻿using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class BiomeCardUI : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
    private WorldManager worldManager;

    [Header("References")]
    [SerializeField] private Button button;
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private Image biomeIconImage;
    [SerializeField] private GameObject backgroundGlow;

    public Biome CurrentBiome { get; private set; }

    private bool isSelected;

    // Awake is safe here since UI scene loads last
    private void Awake()
    {
        worldManager = FindObjectOfType<WorldManager>();
    }

    private void Start()
    {
        button.onClick.AddListener(OnClickCard);
    }

    private void OnDestroy()
    {
        button.onClick.RemoveListener(OnClickCard);
    }

    private void OnDisable()
    {
        isSelected = false;
    }

    public void EnableButton()
    {
        button.interactable = true;

        if(isSelected) EnableSelectedIndicator();
    }

    public void DisableButton()
    {
        button.interactable = false;
    }

    public void AssignCardBiome(Biome biome)
    {
        CurrentBiome = biome;

        nameText.text = worldManager.BiomeDatabase.BiomesDictionary[CurrentBiome].BiomeName;
        biomeIconImage.sprite = worldManager.BiomeDatabase.BiomesDictionary[CurrentBiome].IconSprite;
    }

    private void OnClickCard()
    {
        PlayBiomeSelectSFX();
        
        worldManager.AssignBiomeToSpawnNext(CurrentBiome);
    }

    private void PlayBiomeSelectSFX()
    {
        switch (CurrentBiome)
        {
            case Biome.FOOD:
                AkSoundEngine.PostEvent("FoodBiomeSelect", gameObject);
                break;
            
            case Biome.FIRE:
                AkSoundEngine.PostEvent("Play_LavaBiomeSelect", gameObject);
                break;
            
            case Biome.DREAM:
                AkSoundEngine.PostEvent("Play_DreamForestBiomeSelect", gameObject);
                break;
            
            default:
                AkSoundEngine.PostEvent("ButtonSelect", gameObject);
                break;
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        OnSelect(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        OnDeselect(eventData);
    }

    public void OnSelect(BaseEventData eventData)
    {
        isSelected = true;

        EnableSelectedIndicator();
    }

    public void OnDeselect(BaseEventData eventData)
    {
        isSelected = false;

        DisableSelectedIndicator();
    }

    public void EnableSelectedIndicator()
    {
        backgroundGlow.SetActive(true);
    }

    public void DisableSelectedIndicator()
    {
        backgroundGlow.SetActive(false);
    }
}
