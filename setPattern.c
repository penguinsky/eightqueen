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
			void* tmp;

			int capacity = sizeof(short) * BOARDSIZE * SIZE * ++size_magni;
			tmp = realloc((void*)zipptr, capacity);

			if (tmp == NULL)	//realloc()�����s������
				return false;
			else
				zipptr = tmp;
		}
		else {
			return false;
		}
	}

	for (int x = 0; x < BOARDSIZE; x++)
		for (int y = 0; x < BOARDSIZE; y++)
			if (board[x][y] == 2) {
				zipptr[memory_now][y] = x;
				break;
			}

	memory_now++;
	return true;
}