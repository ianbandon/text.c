#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<stdio.h>
//int main()
//{
//	//192.186.31.121
//	//�������п�
//	//���ַ����п�
//	//strtok(char* str,const char* sep)
//	//       ���ָ���ַ���    �ָ����ļ��� 
//	char buf[] = "2543711796@qq.com";
//	char arr[] = "198.121.156";
//	char* p = "@.";
//    char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	
//	return 0;
//}
//int main()
//{
//	//������
//	//0  No error
//	//1  operation permitted
//	//2  No such file dirctory
//	//errno  ��һ��ȫ�ֵĴ������  ��c�����ڿ⺯��ִ�й����У�
//	//                           �ͻ�Ѷ�Ӧ�Ĵ�����  ��ֵ��errn
//
//
//	/*char* str = streeror(errno);
//	printf("%s\n", str);
//}*/
//
//	//���ļ�
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}
#include <ctype.h>
int main()
{
	//char ch = 'w';
	//int ret = isdigst(ch);//�ж��Ƿ�Ϊ����  ����  0�Ƿ�  ��0��
	//int ret=  islower(ch);//�ж��Ƿ�Ϊ�ַ�  ͬ��
	//printf("%d\n", ret);
	char arr[] = "I AM BABA";
	int i = 0;
	while (arr[i])//�ж��ǲ���0
	{
		if (isupper(arr[i]))//�ж��ַ��Ĵ�дСд��ʽ  ��д����if
		{
			arr[i] = tolower(arr[i]);//tolower ���д�дתСд
		}
			i++;
	}
	printf("%s\n", arr);
	//char a=tolower(ch/'A');//תСд
	//char A=toupper(ch/'a');//ת��д
	return 0;
}