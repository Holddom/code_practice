#pragma once
#include <stdio.h>    //头文件的包含
#include <stdlib.h>
#include <time.h>
#define ROW 3    //符号常量的定义
#define COL 3




void Interface();//开始界面
void initboard(char board[ROW][COL], int row, int col);//初始化棋盘
void display(char board[ROW][COL], int row, int col);//打印棋盘
void playermove(char board[ROW][COL], int row, int col);//玩家下棋
char judgement(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char full(char board[ROW][COL], int row, int col);