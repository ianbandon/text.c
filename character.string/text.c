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
//int main()
//{
//	//׷���ַ���
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	//�Ѳ���2 ���ӵ�  ����1 ����
//	//Դ������޸� ���ұ�����\0
//	//strcat(arr1, arr2);
//	/*my_strcat(arr1,arr2);*/
//
//	printf("%s\n", arr1);
//
//	return 0;
//}
int my_strcmp(char*a, char*b)
{
	assert(a != NULL);
	assert(b != NULL);
	while (*a == *b)
	{
		if (*a == '\0')
		{
			return 0;//���
		}
		a++;
		b++;
	}
	if (*a > *b)
		return 1;
	else
		return -1;
}

//int main()
//{
//
//	char* p1 = "abc";
//	char* p2 = "abd";
//	//�ȵ��Ƕ�Ӧ�ַ�ASCIIֵ  �ж��ַ����Ƿ����
//	//p1>p2 ����ֵ>0  if(ret>0)
//	//p1<p2 ����ֵ<0  if(ret<0)
//	//p1=p2 ����ֵ=0  if(ret=0)
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
char* my_strstr( const char* p1,const char*p2)//����������ƥ����ַ���
{
	assert(p1 != NULL);//�жϲ�λ�մ�
	assert(p2!= NULL); 
	char* s1 = NULL;//��ĸ�����׵�ַ����ʱ����
	char* s2 = NULL;//���Ӵ�����ʱ����
	char* mb = NULL;//��¼ĸ���ı任��ַ
	if (*p1 == '\0')//�ж�ĸ�������ַ�����Ϊ\0
	{
		return (char*)p1;
	}
	else
	{
		mb = p1;
		s1 = p1;
		while(*mb)  //    ĸ����ʼ��
		{ 
			        //s1 ĸ������ʱ����
		            //s2 �ִ�����ʱ����
			        //mb ĸ���ĵ�ַ�仯
			s1 = mb;
			s2 = p2;


			while ((*s1 == *s2) && *s1 && *s2)
			{   
				//ĸ�����׵�ַ����
				//1 2 3     ---
				//1 2 2     --- 
				//�ִ�Ҳ���׵�ַ����
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{
				return (mb);
			}
			mb++;
			
		}
	}
	return NULL;
}
int main()
{
	/*const char arr1[5] = "abc";
	const char arr2[] = "abcdefg";*/
	////ģ��strncpy--ʵ��
	//strncpy(arr1, arr2, 5);//�������������� ��������
	//strnct(arr1, arr2, 3);//׷�ӵ���һ����0\��
	//�Ƚ�
	/*int ret = strncmp(arr1, arr2,4);*/
	///
	///
	//����
	const char arr1[] = "adefh";
	const char arr2[] = "def";
	/*char* ret = strstr(arr1,arr2);*/
	char* ret= my_strstr(arr1, arr2);
	
	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}



