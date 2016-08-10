using UnityEngine;
using System.Collections;

public class Pikachu : MonoBehaviour {
	GameObject pikachuObj;
	// Use this for initialization
	void Start () {
		pikachuObj = GameObject.Find ("Pikachu");


	}
	public void showPikachu(){
		LeanTween.moveX( pikachuObj, pikachuObj.transform.position.x + 2f, 0.8f).setEase(LeanTweenType.easeOutSine).setOnComplete(hidePikachu);
	}

	void hidePikachu(){
		LeanTween.moveX( pikachuObj, pikachuObj.transform.position.x - 2f, 0.5f).setEase(LeanTweenType.easeInBack);

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
