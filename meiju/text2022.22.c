#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ö�� ��һ������
enum Sex
{
	//ö�ٵĿ�����
	Male,//0
    female,//1
	secrect,//2
};
enum color
{
	red,bule,green,
};
//������//����һ��ռ�
union Un
{
	char c;
	int i;
};//��С�����ĳ�Ա��С
int main()
{
	/*enum Sex s=Male;
	enum color w = red; */
	union Un u;
	int a = 1;
	printf("%d ", *(char*)&a);//С�δ洢
	return 0;
}
