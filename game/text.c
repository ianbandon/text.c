#define _CRT_SECURE_NO_WARNINGS
#include"gam.h"
void game()//整个游戏的实现
{
	char board[ROW][COL] = { 0 };//全部空格 数组存放
	//初始化数组
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断
		Judge(board, ROW, COL);
		//电脑下棋
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断
		Judge(board, ROW, COL);

	}
	

}
void menu()//菜单的实现
{
	printf("*****************************\n");
	printf("*****1.play    0.exit   *****\n");
	printf("*****************************\n");

}
void test()//选择选项
{
	int input = 0;
	rand((unsigned int)time(NULL));
	do
	{
	    menu();
	    printf("请选择：>");
	    scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋\n\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
    } while (input);
}
int main()
{
	test();
	return 0;
}