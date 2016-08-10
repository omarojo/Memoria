using UnityEngine;
using System.Collections;

public class CardFront : MonoBehaviour {

	//public string url = "http://images.earthcam.com/ec_metros/ourcams/fridays.jpg";

	private bool isLoading = false;

	public void loadImageWithUrl(string url){
		if (isLoading == false) {
			StartCoroutine( loadImage (url));
		}
	}

	IEnumerator loadImage(string url) {
		isLoading = true;
		// Start a download of the given URL
		WWW www = new WWW(url);

		// Wait for download to complete
		yield return www;

		if (www.error == null)
		{
			isLoading = false;
			// assign texture
			SpriteRenderer renderer = GetComponent<SpriteRenderer>();
			Sprite newSprite = new Sprite ();
			newSprite = Sprite.Create (www.texture, renderer.sprite.rect, new Vector2 (0.5f, 0.5f)); 
			renderer.sprite = newSprite;
		}
		else
		{
			isLoading = false;
			Debug.Log("ERROR: " + www.error);
		}  

	}

	// Update is called once per frame
	void Update () {

	}
}
