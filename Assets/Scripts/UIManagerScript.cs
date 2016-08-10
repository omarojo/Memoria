using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class UIManagerScript : MonoBehaviour {

	public AudioClip winSoundClip;
	private AudioSource a_source;

	void Start(){
		a_source = gameObject.GetComponent<AudioSource> ();
		a_source.PlayOneShot (winSoundClip, 1.0f);
	}

	public void StartGame () {
		SceneManager.LoadScene("GamePlay");
	}
		
}
