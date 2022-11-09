using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SumHandler : MonoBehaviour
{
    [SerializeField]
    public int Sum { get; private set; }
    [Header("Sum Display")]
    [SerializeField]
    private TMP_Text _sumText;
    [SerializeField]
    private TMP_Text _newSumText;

    private void OnEnable()
    {
        FindObjectOfType<BetSetter>().SumBetChanged += OnSumBetChanged; 
        FindObjectOfType<ResultsHandler>().SumResultsChanged += OnSumResultsChanged;
    }

    private void OnDisable()
    {
        if(FindObjectOfType<BetSetter>() != null)
        {
            FindObjectOfType<BetSetter>().SumBetChanged -= OnSumBetChanged; 
            FindObjectOfType<ResultsHandler>().SumResultsChanged -= OnSumResultsChanged;
        }
    }
    
    private void Start()
    {
        SetSumText();
    }

    private void OnSumBetChanged(int _bet)
    {
        if(Sum >= _bet)
        {
            Sum -= _bet;
            SaveSum();
            SetSumText();
        }
    }

    private void OnSumResultsChanged()
    {
        if(ResultsHandler.isTeam1 == true)
        {
            Sum += (int)ResultsHandler.betTeam1;
        }
        else
        {
            Sum += (int)ResultsHandler.betTeam2;
        }
        SaveSum();
        SetSumText();
    }

    private void SetSumText()
    {
        Sum = PlayerPrefs.GetInt("Sum");
        
        _sumText.SetText("Your balance: " + Sum.ToString());
        _newSumText.SetText("Your balance: " + Sum.ToString());
    }

    private void SaveSum()
    {
        PlayerPrefs.SetInt("Sum", Sum);
    }

    public void SumCredit()
    {
        Sum += 50;
        SaveSum();
        SetSumText();
    }
}
