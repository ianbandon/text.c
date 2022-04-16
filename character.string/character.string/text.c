#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char*arr1,const char*arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* ret = arr1;
	//拷贝从arr2--》arr2包括‘0\’
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
//int main()
//{     //字符串
//	char arr1[] = "abcdefi";
//	char arr2[] = "wawa";
//	//把参数2 拷贝到 参数1 \0也拷贝过去
//	//strcpy(arr1, arr2);
//	//适用条价 目标空间足够大
//	//空间要用‘’
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
    // 找到目的字符串
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
	//追加字符串
	char arr1[30] = "hello\0xxxxxxxxx";
	char arr2[] = "world";
	//把参数2 附加到  参数1 后面
	//源必须可修改 而且必须有\0
	//strcat(arr1, arr2);
	my_strcat(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}