#pragma once
#include <stdio.h>    //ͷ�ļ��İ���
#include <stdlib.h>
#include <time.h>
#define ROW 3    //���ų����Ķ���
#define COL 3




void Interface();//��ʼ����
void initboard(char board[ROW][COL], int row, int col);//��ʼ������
void display(char board[ROW][COL], int row, int col);//��ӡ����
void playermove(char board[ROW][COL], int row, int col);//�������
char judgement(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char full(char board[ROW][COL], int row, int col);