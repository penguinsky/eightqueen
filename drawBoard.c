#include"header.h"
#include<stdio.h>
void drawBoard(const short(*board)[BOARDSIZE]) {
	int y, x;

	for (y = 0; y < BOARDSIZE; y++) {
		for (x = 0; x < BOARDSIZE; x++) {
			if (board[x][y] == 2)
				printf("~");
			else
				printf("Z");
		}
		printf("\n");
	}
}