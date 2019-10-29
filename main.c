#include<stdio.h>
#include"header.h"

int main(void) {
	short board[BOARDSIZE][BOARDSIZE];
	initBoard(board);

	calcPattern(board, 0);
	draw(board);

	return 0;
}
