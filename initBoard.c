#include"header.h"

void initBoard(short(*board)[BOARDSIZE]) {
	for (int x = 0; x < BOARDSIZE; x++) {
		for (int y = 0; y < BOARDSIZE; y++) {
			board[x][y] = 0;
		}
	}
}