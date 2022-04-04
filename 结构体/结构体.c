#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct stu 
{
//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void printf1(stu s)
{
	printf("age  %d\n", s.age);
	printf("name %s\n", s.name);
	printf("tele %s\n", s.tele);
	printf("sex  %s\n", s.sex);
}
void printf2(stu* s)
{
	printf("age  %d\n", s->age);
	printf("name %s\n", s->name);
	printf("tele %s\n", s->tele);
	printf("sex  %s\n", s->sex);
}
int main()
{
	stu s1 = { "张三",20,"18255555","男" };
	stu s2 = { "李四",55,"1544445454","女" };
	printf1(s1);
	printf2(&s1);//效果更优

	return 0;
}