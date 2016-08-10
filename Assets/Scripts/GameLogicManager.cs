using UnityEngine;
using System.Collections;

public class GameLogicManager : MonoBehaviour {

	public const int totalPairs = 12;
	public int matchedPairs = 0;

	public GameObject flipedCard1;
	public GameObject flipedCard2;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void evaluateFlippedCards(){
		if (flipedCard1!=null && flipedCard2!=null) {
			if(flipedCard1.GetComponent<CardFlip>().isFaceUp && flipedCard2.GetComponent<CardFlip>().isFaceUp){
				int id_1 = flipedCard1.GetComponent<Card>().id;
				int id_2 = flipedCard2.GetComponent<Card>().id;

				if (id_1 == id_2) { //MATCHED !
					matchedPairs++;
					Debug.Log (">>>> MATCHED !!" + (totalPairs/2-matchedPairs).ToString() + "to go");

				} else {
					Debug.Log (">>> FAILED TO MATCH ");
					flipedCard1.GetComponent<CardFlip> ().flipIt ();
					flipedCard2.GetComponent<CardFlip> ().flipIt ();
				}

				flipedCard1 = null;
				flipedCard2 = null;

			}

		}
	
	}
}
