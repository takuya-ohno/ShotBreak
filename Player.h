/*=============================================================================

		プレイヤー[ Player.h ]

-------------------------------------------------------------------------------
	■　製作者
		大野拓也

	■　作成日
		2016/12/29
-------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	二重インクルード防止
-----------------------------------------------------------------------------*/
#ifndef _PLAYER_H_
#define _PLAYER_H_

/*-----------------------------------------------------------------------------
	定数定義
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	列挙
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	構造体
-----------------------------------------------------------------------------*/
typedef struct
{
	WORLD World;	//	ワールド変換用変数
	D3DXVECTOR3 OldPos;	//	前の座標
	D3DXVECTOR3 Move;	//	移動量
	D3DXVECTOR3 RotSpeed;	//	回転量
	float Radius;	//	半径
	bool Use;	//	使用フラグ

}PLAYER;

/*-----------------------------------------------------------------------------
	プロトタイプ宣言
-----------------------------------------------------------------------------*/
void InitPlayer( void );	//	プレイヤーの初期化
void UninitPlayer( void );	//	プレイヤーの終了
void UpdatePlayer( void );	//	プレイヤーの更新
void DrawPlayer( void );	//	プレイヤーの描画

PLAYER *GetPlayer( void );	//	プレイヤー情報の取得

#endif