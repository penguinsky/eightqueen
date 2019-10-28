#include"header.h"
#include<stdio.h>

void draw(short(*board)[BOARDSIZE])
{
	while (getPattern(board) == true) {
		drawBoard(board);
		putchar('\n');
	}
}
