#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<stdio.h>
//int main()
//{
//	//192.186.31.121
//	//把数字切开
//	//把字符串切开
//	//strtok(char* str,const char* sep)
//	//       被分割的字符串    分隔符的集合 
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
//	//错误码
//	//0  No error
//	//1  operation permitted
//	//2  No such file dirctory
//	//errno  是一个全局的错误变量  当c语言在库函数执行过程中，
//	//                           就会把对应的错误码  赋值到errn
//
//
//	/*char* str = streeror(errno);
//	printf("%s\n", str);
//}*/
//
//	//打开文件
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
	//int ret = isdigst(ch);//判断是否为数字  返回  0是非  非0是
	//int ret=  islower(ch);//判断是否为字符  同上
	//printf("%d\n", ret);
	char arr[] = "I AM BABA";
	int i = 0;
	while (arr[i])//判断是不是0
	{
		if (isupper(arr[i]))//判断字符的大写小写形式  大写进入if
		{
			arr[i] = tolower(arr[i]);//tolower 进行大写转小写
		}
			i++;
	}
	printf("%s\n", arr);
	//char a=tolower(ch/'A');//转小写
	//char A=toupper(ch/'a');//转大写
	return 0;
}