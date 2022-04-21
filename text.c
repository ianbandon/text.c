#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//位段  二进制位
struct s 
{
	int a : 2;//bit 位
	int b : 5;
	int c : 5;
};
int main()
{
	struct s a; 
}