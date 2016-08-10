using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameLogicManager : MonoBehaviour {

	public const int totalPairs = 12;
	public int matchedPairs = 0;

	public GameObject flipedCard1;
	public GameObject flipedCard2;

	//Sounds
	public AudioClip matchedSound;
	private AudioSource a_source;

	// Use this for initialization
	void Start () {
		a_source = gameObject.GetComponent<AudioSource> ();
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
					a_source.PlayOneShot (matchedSound, 1.0f); //Play Pikachu Sound
					GameObject.Find("Pikachu").GetComponent<Pikachu>().showPikachu(); //Show Pikacho Hello
					Debug.Log (">>>> MATCHED !!" + (totalPairs/2-matchedPairs).ToString() + "to go");
					if (matchedPairs == totalPairs/2) {
						SceneManager.LoadScene("End");
					}

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
