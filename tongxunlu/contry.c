#define _CRT_SECURE_NO_WARNINGS
#include "tunxun.h"
//ʵ�ֺ���
void Initcontact(struct Cla* p)
{	
	meset(p->date, 0, sizeof(p->date));//�ڴ�ռ�����Ϊ��
	p->size =0;
}