/*=============================================================================

		メッシュウォール[ MeshWall.h ]

-------------------------------------------------------------------------------
	■　製作者
		大野拓也

	■　作成日
		2016/11/02
-------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------
	二重インクルード防止
-----------------------------------------------------------------------------*/
#ifndef _MESHWALL_H_
#define _MESHWALL_H_

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
	bool Use;	//	使用フラグ

}MESHWALL;

/*-----------------------------------------------------------------------------
	プロトタイプ宣言
-----------------------------------------------------------------------------*/
void InitMeshWall( void );		//	メッシュウォールの初期化
void UninitMeshWall( void );	//	メッシュウォールの終了
void UpdateMeshWall( void );	//	メッシュウォールの更新
void DrawMeshWall( void );		//	メッシュウォールの描画

MESHWALL *GetMeshWall( void );	//	メッシュウォール情報取得

#endif