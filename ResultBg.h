/*=============================================================================

		リザルト[ ResultBg.h ]

-------------------------------------------------------------------------------

	■　作成日
		2017/01/06
-------------------------------------------------------------------------------
	■　Update
=============================================================================*/

/*-----------------------------------------------------------------------------
	二重インクルード防止
-----------------------------------------------------------------------------*/
#ifndef _RESULTBG_H_
#define _RESULTBG_H_

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
void InitResultBg( void );		//	リザルトの初期化
void UninitResultBg( void );	//	リザルトの終了
void UpdateResultBg( void );	//	リザルトの更新
void DrawResultBg( void );		//	リザルトの描画

#endif
