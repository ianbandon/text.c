#define _CRT_SECURE_NO_WARNINGS
#include "tunxun.h"
//���Թ���
//1 ��ź�����Ϣ  ���� �绰 �Ա� סַ ���� 
//2 ���Ӻ�����Ϣ
//3 ɾ��
//���Һ�����Ϣ
//�޸ĺ�����Ϣ
//��ӡ������Ϣ
//����ȵ�
void menu()
{
	printf("********************************");
	printf("*****1.add         2.del*******");
	printf("*****3.search      4.modfily***");
	printf("*****4.show        0.exit******");
}
int main()
{
	int input = 0;
	struct Cla con;//con ����ͨѶ¼
	//��ʼ��
	Initcontact(&con);
	do
	{
		meun();
		printf("��ѡ��> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}


	}while(1);
	return 0;
 }