#include<stdio.h>
#include"header.h"

short board[BOARDSIZE][BOARDSIZE];

int main(void) {
	
	initBoard();
	calcPattern();
	draw();

	return 0;
}
