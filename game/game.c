#define _CRT_SECURE_NO_WARNINGS
#include "gam.h"
void InitBoard(char board[ROW][COL], int row, int col)//��ʼ������
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
void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0;//��ӡ���У�����+�ָ�����
	for (i = 0; i < row; i++)
	{
		int j = 0;
		int k = 0;
		for (j = 0; j < col; j++)//��ӡ����
		{
			
			if(j==col-1)
				printf(" %c ", board[i][j]);
			else
			    printf(" %c |", board[i][j]);//��ӡ������
		}
		printf("\n");
		if (i < row - 1)//��ӡ�ָ���
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
	}/////////���̴�ӡ
}
void Playermove( char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("�����\n���������꣨�����ո�������>\n");
		scanf("%d%d", &row, &col);//�ж�����ĺϷ���
		if (row >= 1 && row < ROW + 1 && col >= 1 && col < COL + 1)
		{
			//�ж��Ƿ���������
			if (board[row - 1][col - 1] == ' ')
			{
				board[row - 1][col - 1] ='*';
				break;
			}
			else
				printf("�����ѱ�ռ\n");
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
    }
}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������>\n");
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

	//���Ӯ

	
	//����Ӯ

	//
}