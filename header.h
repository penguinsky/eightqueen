#pragma once
#include<stdbool.h>

#define BOARDSIZE 8//�Ֆʂ̃}�X�ڂ̐�

bool setPattern(const short(*board)[BOARDSIZE]);	//board���p�^�[���Ɉ��k���ċL�^����
bool getPattern(short(*board)[BOARDSIZE]);			//�L�^�����p�^�[������board���Č�����

void initBoard(short(*board)[BOARDSIZE]);			//board��������(0����)����
void calcPattern(short(*board)[BOARDSIZE], int y);	//8�N�C�[���𖞂����p�^�[����S�Čv�Z���AsetPattern()�ŋL�^����
void draw(short(*board)[BOARDSIZE]);				//�L�^�����p�^�[���S�Ă�drawBoard()�ŕ`�悷��
void drawBoard(const short(*board)[BOARDSIZE]);		//board����Ֆʂ�`�悷��
