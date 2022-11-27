using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIOrientationController : MonoBehaviour
{
    // Update is called once per frame
    [Header("Attributes Team 1")]    
    [SerializeField] private TMP_Text _coefTeam1;
    [SerializeField] private TMP_Text _nameTeam1;
    [SerializeField] private Image _gerbTeam1;
    [SerializeField] private TMP_InputField _inputFieldTeam1;
    [SerializeField] private Button _setBetButtonTeam1;

    [Header("Attributes Team 2")]    
    [SerializeField] private TMP_Text _coefTeam2;
    [SerializeField] private TMP_Text _nameTeam2;
    [SerializeField] private Image _gerbTeam2;
    [SerializeField] private TMP_InputField _inputFieldTeam2;
    [SerializeField] private Button _setBetButtonTeam2;

    [Header("Other In-game Attributes")]
    [SerializeField] private TMP_Text _sumText;
    [SerializeField] private Button _pawnThins;
    [SerializeField] private Button _showResults;
    [SerializeField] private GameObject _bg;
    [SerializeField] private GameObject _resultsPanel;

    private void Update()
    {
        if(Screen.orientation == ScreenOrientation.LandscapeLeft || Screen.orientation == ScreenOrientation.LandscapeRight)
        {
            LandscapeOrientated();
        }
        
        else if(Screen.orientation == ScreenOrientation.Portrait || Screen.orientation == ScreenOrientation.PortraitUpsideDown)
        {
            PortraitOrientated();
        }
    }

    private void LandscapeOrientated()
    {
        _coefTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, 278);
        _coefTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0, 0.5f);
        _coefTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0, 0.5f);
        _coefTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(-300, 278);
        _coefTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(1, 0.5f);
        _coefTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(1, 0.5f);

        _nameTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, 178);
        _nameTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0, 0.5f);
        _nameTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0, 0.5f);
        _nameTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(-300, 178);
        _nameTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(1, 0.5f);
        _nameTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(1, 0.5f);

        _gerbTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, -102);
        _gerbTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0, 0.5f);
        _gerbTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0, 0.5f);
        _gerbTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(-300, -102);
        _gerbTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(1, 0.5f);
        _gerbTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(1, 0.5f);

        _inputFieldTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(700, 1);
        _inputFieldTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0, 0.5f);
        _inputFieldTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0, 0.5f);
        _inputFieldTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(-700, -1);
        _inputFieldTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(1, 0.5f);
        _inputFieldTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(1, 0.5f);

        _setBetButtonTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(650, -101);
        _setBetButtonTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0, 0.5f);
        _setBetButtonTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0, 0.5f);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(-650, -101);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(1, 0.5f);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(1, 0.5f);

        _sumText.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -84);
        _sumText.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _sumText.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);

        _pawnThins.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -172);
        _pawnThins.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _pawnThins.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);

        _showResults.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, 205);
        _showResults.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _showResults.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _resultsPanel.GetComponent<RectTransform>().anchoredPosition = new Vector2(475, 475);

        _bg.GetComponent<RectTransform>().rotation = Quaternion.Euler(0, 0, 0);
    }

    private void PortraitOrientated()
    {
        _coefTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, -470);
        _coefTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _coefTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);
        _coefTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, 470);
        _coefTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _coefTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _nameTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, -360);
        _nameTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _nameTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);
        _nameTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(300, 580);
        _nameTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _nameTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _gerbTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -470);
        _gerbTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _gerbTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);
        _gerbTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, 470);
        _gerbTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _gerbTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _inputFieldTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -750);
        _inputFieldTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _inputFieldTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);
        _inputFieldTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, 750);
        _inputFieldTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _inputFieldTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _setBetButtonTeam1.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -840);
        _setBetButtonTeam1.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _setBetButtonTeam1.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, 840);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _setBetButtonTeam2.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _sumText.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -84);
        _sumText.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _sumText.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);

        _pawnThins.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -172);
        _pawnThins.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 1);
        _pawnThins.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 1);

        _showResults.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, 137);
        _showResults.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0);
        _showResults.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0);

        _resultsPanel.GetComponent<RectTransform>().anchoredPosition = new Vector2(100, 100);

        _bg.GetComponent<RectTransform>().rotation = Quaternion.Euler(0, 0, 90);
    }
}
