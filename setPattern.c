#include"header.h"
#include"Pattern.h"
#include<stdlib.h>

#define SIZE 100	//��x�Ɋm�ۂ���e��(short[BOARDSIZE]�P��)
#define MAGNI_MAX 5	//�m�ۂ���e�ʂ̍ő�l
int memory_now = 0;
short(*zipptr)[BOARDSIZE] = NULL;

bool setPattern(const short(*board)[BOARDSIZE]) {
	static int size_magni;

	if (memory_now >= SIZE * size_magni) {	//�e�ʂ�����ĂȂ��Ȃ�
		if (size_magni < MAGNI_MAX) {		//�e�ʂ̊���̍ő�l�𒴂��Ȃ��Ȃ�

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