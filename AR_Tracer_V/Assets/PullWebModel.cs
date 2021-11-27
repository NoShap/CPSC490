using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using Dummiesman;

public class PullWebModel : MonoBehaviour
{
    public byte[] bytestream;
    public string obj_name;
    public GameObject WebPullTest;
    // Start is called before the first frame update

    void Start()
    {
        // print("Noahs-MacBook-Pro.local:8000/"+ obj_name + ".obj");
        // StartCoroutine(GetRequest("Noahs-MacBook-Pro.local:8000/"+ obj_name + ".obj", bytestream));
    }

    IEnumerator GetRequest(string uri, byte[] set_object)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            string[] pages = uri.Split('/');
            int page = pages.Length - 1;

            switch (webRequest.result)
            {
                case UnityWebRequest.Result.ConnectionError:
                case UnityWebRequest.Result.DataProcessingError:
                    Debug.LogError(pages[page] + ": Error: " + webRequest.error);
                    break;
                case UnityWebRequest.Result.ProtocolError:
                    Debug.LogError(pages[page] + ": HTTP Error: " + webRequest.error);
                    break;
                case UnityWebRequest.Result.Success:
                    Debug.Log(pages[page] + ":\nReceived: " + webRequest.downloadHandler.text);

                    set_object = webRequest.downloadHandler.data;
                    MemoryStream stream = new MemoryStream(set_object);
                    WebPullTest = new OBJLoader().Load(stream);
                    WebPullTest.transform.localScale = new Vector3(0.01f,0.01f,0.01f);
                    break;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
         if (Input.GetKeyDown("up"))
        {
           print("Noahs-MacBook-Pro.local:8000/"+ obj_name + ".obj");
           StartCoroutine(GetRequest("Noahs-MacBook-Pro.local:8000/"+ obj_name + ".obj", bytestream));
        }
    }
}
