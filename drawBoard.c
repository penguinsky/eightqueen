#include"header.h"
#include<stdio.h>
void drawBoard(const short(*board)[BOARDSIZE]) {
	int i, j;

	for (i = 0; i < BOARDSIZE; i++) {
		for (j = 0; j < BOARDSIZE; j++) {
			if (board[i][j] == 2)
				printf("~");
			else
				printf("Z");
		}
		printf("\n");
	}

	return 0;
}