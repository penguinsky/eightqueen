#include"header.h"

void calcPattern(short(*board)[BOARDSIZE],int i,int j) 
{
	int k;

	for (k = 0;k < BOARDSIZE;k++) 
	{
		board[k][j] += 1;//�c����
		board[i][k] += 1;//������
	}

	if (i > j)
	{
		for (k = 0;k < BOARDSIZE - (i - j);k++)
		{
			board[k + (i - j)][k] += 1;//�E���΂߁ii>j�̂Ƃ��j
		}
	}
	else
	{
		for (k = 0;k < BOARDSIZE - (j - i);k++)
		{
			board[k][k + (j - i)] += 1;//�E���΂߁ii<=j�̂Ƃ��j
		}
	}

	if (i + j < BOARDSIZE)
	{
		for (k = 0;k <= i + j;k++)
		{
			board[i + j - k][k] += 1;//�����΂߁ii+J< BOARDSIZE�̂Ƃ��j
		}
	}
	else
	{
		for (k = i + j - BOARDSIZE + 1;k < BOARDSIZE;k++)
		{
			board[i + j - k][k] += 1;//�����΂߁ii+j>= BOARDSIZE�̂Ƃ��j
		}
	}
}

i�s�ڂ̃N�C�[���̈ʒu��ݒ肷��B���̂��ƁASETQUEEN()�ŌĂяo���ăN�C�[�����i�[�B
void SETQUEEN(int queen[BOARDSIZE],int board[BOARDSIZE][BOARDSIZE],int i)
{
	int j;

	if (i = BOARDSIZE)
	{
		
	}
	for()
}