#define _CRT_SECURE_NO_WARNINGS
#include "gam.h"
void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;//打印几行（数据+分隔符）
	for (i = 0; i < row; i++)
	{
		int j = 0;
		int k = 0;
		for (j = 0; j < col; j++)//打印数行
		{
			
			if(j==col-1)
				printf(" %c ", board[i][j]);
			else
			    printf(" %c |", board[i][j]);//打印数据行
		}
		printf("\n");
		if (i < row - 1)//打印分割行
		{
			for (k = 0; k < row; k++)
			{
				if (k == row - 1)
					printf("---");
				else
					printf("---|");
			}
		}
		else
			printf("\n");
		printf("\n");
	}/////////棋盘打印
}
void Playermove( char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("玩家走\n请输入坐标（行数空格列数）>\n");
		scanf("%d%d", &row, &col);//判断输入的合法性
		if (row >= 1 && row < ROW + 1 && col >= 1 && col < COL + 1)
		{
			//判断是否已有数字
			if (board[row - 1][col - 1] == ' ')
			{
				board[row - 1][col - 1] ='*';
				break;
			}
			else
				printf("坐标已被占\n");
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
    }
}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
			board[x][y] = '+';
		    break;
     }
}
void Judge(char board[ROW][COL], int row, int col)
{

	//玩家赢

	
	//电脑赢

	//
}