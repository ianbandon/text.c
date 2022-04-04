#pragma once
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL],int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
 void Judge(char board[ROW][COL], int row, int col);