#include"header.h"

void calcPattern(short(*board)[BOARDSIZE],int i,int j) 
{
	int k;

	for (k = 0;k < BOARDSIZE;k++) 
	{
		board[k][j] += 1;//縦処理
		board[i][k] += 1;//横処理
	}

	if (i > j)
	{
		for (k = 0;k < BOARDSIZE - (i - j);k++)
		{
			board[k + (i - j)][k] += 1;//右下斜め（i>jのとき）
		}
	}
	else
	{
		for (k = 0;k < BOARDSIZE - (j - i);k++)
		{
			board[k][k + (j - i)] += 1;//右下斜め（i<=jのとき）
		}
	}

	if (i + j < BOARDSIZE)
	{
		for (k = 0;k <= i + j;k++)
		{
			board[i + j - k][k] += 1;//左下斜め（i+J< BOARDSIZEのとき）
		}
	}
	else
	{
		for (k = i + j - BOARDSIZE + 1;k < BOARDSIZE;k++)
		{
			board[i + j - k][k] += 1;//左下斜め（i+j>= BOARDSIZEのとき）
		}
	}
}

i行目のクイーンの位置を設定する。そのあと、SETQUEEN()で呼び出してクイーンを格納。
void SETQUEEN(int queen[BOARDSIZE],int board[BOARDSIZE][BOARDSIZE],int i)
{
	int j;

	if (i = BOARDSIZE)
	{
		
	}
	for()
}