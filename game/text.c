#define _CRT_SECURE_NO_WARNINGS
#include"gam.h"
void game()//������Ϸ��ʵ��
{
	char board[ROW][COL] = { 0 };//ȫ���ո� ������
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�
		Judge(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�
		Judge(board, ROW, COL);

	}
	

}
void menu()//�˵���ʵ��
{
	printf("*****************************\n");
	printf("*****1.play    0.exit   *****\n");
	printf("*****************************\n");

}
void test()//ѡ��ѡ��
{
	int input = 0;
	rand((unsigned int)time(NULL));
	do
	{
	    menu();
	    printf("��ѡ��>");
	    scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("������\n\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
    } while (input);
}
int main()
{
	test();
	return 0;
}