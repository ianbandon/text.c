#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct stu 
{
//��Ա����
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
	stu s1 = { "����",20,"18255555","��" };
	stu s2 = { "����",55,"1544445454","Ů" };
	printf1(s1);
	printf2(&s1);//Ч������

	return 0;
}