#include "header.h"
#include "Pattern.h"

bool getPattern(short(*board)[BOARDSIZE]) {
	initBoard(board);

	static int memory_view = 0;
	int y;
	if (memory_view >= memory_now) {
		return false;
	}
	for (y = 0; y < BOARDSIZE; y++) {
		int queen_pos = zipptr[memory_view][y];
		board[queen_pos][y] = QUEEN;
	}
	memory_view++;
	return true;
}
