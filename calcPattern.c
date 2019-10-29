#include"header.h"

bool checkQueen(short(*board)[BOARDSIZE], int x, int y);

void calcPattern(short(*board)[BOARDSIZE],int y)
{
	for (int x = 0;x < BOARDSIZE;x++) {
		if (checkQueen(board, x, y)) {
			board[x][y] = 2;
			if (y == BOARDSIZE - 1) {
				setPattern(board);
			} else {
				calcPattern(board, y + 1);
			}
			board[x][y] = 0;
		}
	}
}

bool checkQueen(short(*board)[BOARDSIZE], int x, int y) {
	bool ret = true;

	for (int i = 1;i <= y;i++) {
		if (board[x][y - i] == 2)
			ret = false;

		if (x - i >= 0)
			if (board[x - i][y - i] == 2)
			       ret = false;

		if (x + i < BOARDSIZE)
			if (board[x + i][y - i] == 2)
				ret = false;
	}

	return ret;
}