#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char*arr1,const char*arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* ret = arr1;
	//������arr2--��arr2������0\��
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
//int main()
//{     //�ַ���
//	char arr1[] = "abcdefi";
//	char arr2[] = "wawa";
//	//�Ѳ���2 ������ ����1 \0Ҳ������ȥ
//	//strcpy(arr1, arr2);
//	//�������� Ŀ��ռ��㹻��
//	//�ռ�Ҫ�á���
//	//
//	my_strcpy(arr1, arr2);
//	return 0;
//}
char* my_strcat(char*arr1,char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2);
	// arr1  hello0\
	// arr2  world0\
    // �ҵ�Ŀ���ַ���
	while (*arr1 != '\0')
	{
		arr1++;

	}
	while (*arr1++ = *arr2++)
	{
		;
	}
	return (arr1);
}
int main()
{
	//׷���ַ���
	char arr1[30] = "hello\0xxxxxxxxx";
	char arr2[] = "world";
	//�Ѳ���2 ���ӵ�  ����1 ����
	//Դ������޸� ���ұ�����\0
	//strcat(arr1, arr2);
	my_strcat(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}