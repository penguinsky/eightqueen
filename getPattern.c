#include "header.h"
#include "Pattern.h"

bool getPattern(short(*board)[BOARDSIZE]) {
	initBoard(board);

	static int memory_view = 0;
	int a;
	if (memory_view >= memory_now) {
		return false;
	}
	for (a = 0; a < 8; a++) {
		int queen_pos = zipptr[memory_view][a];
		board[a][queen_pos] = 2;
	}
	memory_view++;
	return true;
}