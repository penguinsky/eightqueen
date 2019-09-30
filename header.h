#pragma once
#include<stdbool.h>

#define BOARDSIZE 8//盤面のマス目の数

extern short board[BOARDSIZE][BOARDSIZE];//盤面

bool setPattern(void);//boardをパターンに圧縮して記録する
bool getPattern(void);//記録したパターンからboardを再現する

void initBoard(void);//boardを初期化(0埋め)する
void calcPattern(void);//8クイーンを満たすパターンを全て計算し、setPattern()で記録する
void draw(void);//記録したパターン全てをdrawboard()で描画する
void drawboard(void);//boardから盤面を描画する
