#include"header.h"

void draw(short(*board)[BOARDSIZE])
{
	while (getPattern(board) == true) {
		darwboard(board);
	}
}
