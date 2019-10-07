#include"header.h"
#include"Pattern.h"

#define SIZE 100
#define MAGNI_MAX 5
int memory_now = 0;
short(*zipptr)[BOARDSIZE] = 0;

bool setPattern(const short(*board)[BOARDSIZE]) {
	static int memory_max = SIZE;
	static int size_magni = 0;

	
	if (memory_now >= SIZE * size_magni) {//�e�ʂ�����ĂȂ��Ȃ�
		if (size_magni < MAGNI_MAX) {//�e�ʂ̊���̍ő�l�𒴂��Ȃ��Ȃ�
			//�e�ʂ𑝂₷
			size_magni++;
			zipptr = (short(*)[BOARDSIZE])realloc((void*)zipptr, sizeof(short) * BOARDSIZE * SIZE * size_magni);
			memory_max += SIZE;
		}
		else {
			return false;
		}
	}

	for (int i = 0; i < BOARDSIZE; i++)
		for (int j = 0; i < BOARDSIZE; i++)
			if (board[i][j] == 2)
				zipptr[memory_now][j] = i;

	memory_now++;
	return true;
}