using UnityEngine;
using System.Collections;

public class CardFlip : MonoBehaviour {


	public int fps = 60;
	public float rotateDegreesPerSecond = 180f;
	public bool isFaceUp = false;


	const float FLIP_LIMIT_DEGREE = 180f;
	float waitTime;
	bool isAnimatingProcessing = false;

	//Sounds
	public AudioClip flipSound;
	private AudioSource a_source;

	// Use this for initialization
	void Start () {	
		waitTime = 1.0f / fps;
		a_source = GetComponent<AudioSource>();
	}

	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown(){
		if(isAnimatingProcessing || this.isFaceUp){ 
			return;
		}
		a_source.PlayOneShot(flipSound,1.0f);
		StartCoroutine(flip());
	}

	public void flipIt(){
		if(isAnimatingProcessing){ 
			return;
		}
		StartCoroutine(flip());
	}

	IEnumerator flip(){
		isAnimatingProcessing = true;
		bool done = false;
		while (!done) {
			float degree = rotateDegreesPerSecond * Time.deltaTime * 2;
			if (isFaceUp) {
				degree = -degree;
			}
			transform.Rotate (new Vector3 (0,0,degree));
			if (FLIP_LIMIT_DEGREE < transform.eulerAngles.z) {
				
				transform.Rotate (new Vector3 (0, 0, -degree));

				done = true;
			}

			yield return new WaitForSeconds (waitTime);
		
		}
		isFaceUp = !isFaceUp;
		isAnimatingProcessing = false;

		if (isFaceUp) {
			GameLogicManager gameManager = GameObject.Find ("GameLogicManager").GetComponent<GameLogicManager> ();

			if (gameManager.flipedCard1 == null) {
				gameManager.flipedCard1 = gameObject;
			} else {
				gameManager.flipedCard2 = gameObject;
			}
				
			if(gameManager.flipedCard1!=null && gameManager.flipedCard2!=null)
				GameObject.Find ("GameLogicManager").GetComponent<GameLogicManager>().evaluateFlippedCards();
		}
	}
}
