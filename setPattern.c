#include"header.h"
#include"Pattern.h"
#include<stdlib.h>

#define SIZE 100	//一度に確保する容量(short[BOARDSIZE]単位)
#define MAGNI_MAX 5	//確保する容量の最大値
int memory_now = 0;
short(*zipptr)[BOARDSIZE] = NULL;

bool setPattern(const short(*board)[BOARDSIZE]) {
	static int size_magni;

	if (memory_now >= SIZE * size_magni) {	//容量が足りてないなら
		if (size_magni < MAGNI_MAX) {		//容量の既定の最大値を超えないなら

			int capacity = sizeof(short) * BOARDSIZE * SIZE * ++size_magni;
			zipptr = (short(*)[BOARDSIZE])realloc((void*)zipptr, capacity);
		}
		else {
			return false;
		}
	}

	for (int i = 0; i < BOARDSIZE; i++)
		for (int j = 0; i < BOARDSIZE; i++)
			if (board[i][j] == 2) {
				zipptr[memory_now][j] = i;
				break;
			}

	memory_now++;
	return true;
}