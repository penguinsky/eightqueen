#pragma once
#include<stdbool.h>

#define BOARDSIZE 8//盤面のマス目の数

bool setPattern(const short(*board)[BOARDSIZE]);	//boardをパターンに圧縮して記録する
bool getPattern(short(*board)[BOARDSIZE]);			//記録したパターンからboardを再現する

void initBoard(short(*board)[BOARDSIZE]);			//boardを初期化(0埋め)する
void calcPattern(short(*board)[BOARDSIZE], int y);	//8クイーンを満たすパターンを全て計算し、setPattern()で記録する
void draw(short(*board)[BOARDSIZE]);				//記録したパターン全てをdrawBoard()で描画する
void drawBoard(const short(*board)[BOARDSIZE]);		//boardから盤面を描画する
