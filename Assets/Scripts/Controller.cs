using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller : MonoBehaviour {
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (GetComponent<PhotonView>().isMine)//如果是本地玩家则直接移动
          transform.Translate(-0.2f*Time.deltaTime, 0f, 0f);
		else //如果是远程玩家，将其平滑移动（包括location rotation 和 scale）
		{
			//代码
		}
	}
}


