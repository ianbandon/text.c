#define _CRT_SECURE_NO_WARNINGS
#include "tunxun.h"
//测试功能
//1 存放好友信息  名字 电话 性别 住址 年龄 
//2 增加好友信息
//3 删除
//查找好友信息
//修改好友信息
//打印好友信息
//排序等等
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
	struct Cla con;//con 就是通讯录
	//初始化
	Initcontact(&con);
	do
	{
		meun();
		printf("请选择：> ");
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
			printf("退出成功\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}


	}while(1);
	return 0;
 }