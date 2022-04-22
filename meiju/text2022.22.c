#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//枚举 是一种类型
enum Sex
{
	//枚举的可能性
	Male,//0
    female,//1
	secrect,//2
};
enum color
{
	red,bule,green,
};
//联合体//共用一块空间
union Un
{
	char c;
	int i;
};//大小是最大的成员大小
int main()
{
	/*enum Sex s=Male;
	enum color w = red; */
	union Un u;
	int a = 1;
	printf("%d ", *(char*)&a);//小段存储
	return 0;
}
