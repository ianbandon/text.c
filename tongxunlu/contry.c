#define _CRT_SECURE_NO_WARNINGS
#include "tunxun.h"
//实现函数
void Initcontact(struct Cla* p)
{	
	meset(p->date, 0, sizeof(p->date));//内存空间设置为零
	p->size =0;
}