using UnityEngine;
using System.Collections;

public class CardBack : MonoBehaviour {

	public string url = "http://images.earthcam.com/ec_metros/ourcams/fridays.jpg";

	IEnumerator Start() {
		// Start a download of the given URL
		WWW www = new WWW(url);

		// Wait for download to complete
		yield return www;



		// assign texture
		SpriteRenderer renderer = GetComponent<SpriteRenderer>();
//		float w = renderer.sprite.rect
		Sprite newSprite = new Sprite ();
		newSprite = Sprite.Create (www.texture, renderer.sprite.rect, new Vector2 (0.5f, 0.5f)); 
		renderer.sprite = newSprite;
//		renderer.material.mainTexture = www.texture;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
