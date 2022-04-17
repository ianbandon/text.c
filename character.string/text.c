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
//int main()
//{
//	//追加字符串
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	//把参数2 附加到  参数1 后面
//	//源必须可修改 而且必须有\0
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
			return 0;//相等
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
//	//比的是对应字符ASCII值  判断字符串是否相等
//	//p1>p2 返回值>0  if(ret>0)
//	//p1<p2 返回值<0  if(ret<0)
//	//p1=p2 返回值=0  if(ret=0)
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
char* my_strstr( const char* p1,const char*p2)//传入了两个匹配的字符串
{
	assert(p1 != NULL);//判断部位空串
	assert(p2!= NULL); 
	char* s1 = NULL;//把母串的首地址给临时变量
	char* s2 = NULL;//把子串给临时变量
	char* mb = NULL;//记录母串的变换地址
	if (*p1 == '\0')//判断母串的首字符串不为\0
	{
		return (char*)p1;
	}
	else
	{
		mb = p1;
		s1 = p1;
		while(*mb)  //    母串开始找
		{ 
			        //s1 母串的临时变量
		            //s2 字串的临时变量
			        //mb 母串的地址变化
			s1 = mb;
			s2 = p2;


			while ((*s1 == *s2) && *s1 && *s2)
			{   
				//母串从首地址出发
				//1 2 3     ---
				//1 2 2     --- 
				//字串也从首地址出发
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
	////模拟strncpy--实现
	//strncpy(arr1, arr2, 5);//拷贝的字数限制 不够补零
	//strnct(arr1, arr2, 3);//追加的有一个‘0\’
	//比较
	/*int ret = strncmp(arr1, arr2,4);*/
	///
	///
	//查找
	const char arr1[] = "adefh";
	const char arr2[] = "def";
	/*char* ret = strstr(arr1,arr2);*/
	char* ret= my_strstr(arr1, arr2);
	
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}



