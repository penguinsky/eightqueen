#pragma once
#include<stdbool.h>

#define BOARDSIZE 8//�Ֆʂ̃}�X�ڂ̐�

extern short board[BOARDSIZE][BOARDSIZE];//�Ֆ�

bool setPattern(void);//board���p�^�[���Ɉ��k���ċL�^����
bool getPattern(void);//�L�^�����p�^�[������board���Č�����

void initBoard(void);//board��������(0����)����
void calcPattern(void);//8�N�C�[���𖞂����p�^�[����S�Čv�Z���AsetPattern()�ŋL�^����
void draw(void);//�L�^�����p�^�[���S�Ă�drawboard()�ŕ`�悷��
void drawboard(void);//board����Ֆʂ�`�悷��
