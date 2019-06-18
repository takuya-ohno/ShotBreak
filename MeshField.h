/*=============================================================================

		メッシュフィールド[ MeshField.h ]

-------------------------------------------------------------------------------
	■　製作者
		大野拓也

	■　作成日
		2016/11/09
-------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	二重インクルード防止
-----------------------------------------------------------------------------*/
#ifndef _MESHFIELD_H_
#define _MESHFIELD_H_

/*-----------------------------------------------------------------------------
	定数定義
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	列挙
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	構造体
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	プロトタイプ宣言
-----------------------------------------------------------------------------*/
void InitMeshField( void );		//	メッシュフィールドの初期化
void UninitMeshField( void );	//	メッシュフィールドの終了
void UpdateMeshField( void );	//	メッシュフィールドの更新
void DrawMeshField( void );		//	メッシュフィールドの描画

#endif