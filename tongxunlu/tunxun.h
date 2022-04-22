#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//声明函数
#define MAX_NAME 100
#define MAX_SEX 3
#define MAX_TELE 12
#define MAX_ADDER 30
#define Maxsize 1000
struct infmation
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDER];
};
struct Cla
{
	struct infmation date[Maxsize];//存放一个信息
	int size;//记录当前已经有的元素个数
};
//声明函数
void Initcontact(struct Cla* p);