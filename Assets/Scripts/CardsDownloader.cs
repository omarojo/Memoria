using UnityEngine;
using System.Collections;
using LitJson;
using System.Collections.Generic;

public class CardsDownloader : MonoBehaviour {

	private string jsonString;
	private JsonData cardsData;

	// Use this for initialization
//	void Start () {
//
//
//
//	}
	IEnumerator Start()
	{
		string url = "http://www.omarojo.com/demos/memorias/JsonCards.json";
		WWW www = new WWW(url);
		yield return www;
		if (www.error == null)
		{
			loadCardsImages(www.text);

		}
		else
		{
			Debug.Log("ERROR: " + www.error);
		}        
	}    
	
	// Update is called once per frame
	void Update () {
		
	}

	void loadCardsImages (string jsonText){
		cardsData = JsonMapper.ToObject (jsonText);

		//Get Cards Objects
		List<GameObject> allCardsObjects = new List<GameObject>();
		allCardsObjects.AddRange(GameObject.FindGameObjectsWithTag ("Card"));

		int totalCards = cardsData ["cards"].Count;
		//Define our 6 random cards to play with.
		for (int i = 0; i < 6; i++) {
			JsonData randCard = cardsData ["cards"] [Random.Range (0, totalCards - 1)];
			//Debug.Log (randCard["id"]);
			//Assign the cards value to 2 cards in the game
			for (int j = 0; j < 2; j++) {
				int randCardIndex = Random.Range (0, allCardsObjects.Count - 1); //pick a card from the game cards
				GameObject cardObj = allCardsObjects[randCardIndex];
				cardObj.GetComponent<Card>().id = int.Parse(randCard["id"].ToString());
				Debug.Log (cardObj.GetComponent<Card> ().id);
				//Download the image and set it to the Card
				cardObj.transform.GetComponentInChildren<CardFront>().loadImageWithUrl(randCard["imageUrl"].ToString());
				allCardsObjects.Remove (cardObj);
			}
		}

		//Assing the cards values to Card objects
//
//		foreach (GameObject cardObj in allCardsObjects) {
//			cardObj.GetComponent<Card> ().id = ;
//		}
	}


}
