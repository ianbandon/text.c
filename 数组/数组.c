#define _CRT_SECURE_NO_WARNINGS
//数组
#include <stdio.h>
//int main()
//{  
//	//int arr[10] = { 1,2,3 };//不完全初始化 剩下的默认为0
//	////sizeof()//求得是arr所占空间大小
//	////strlen求字符串长度\0停止
//	//char arr1[] = "abc";
//	//printf("%d", sizeof(arr1)); 
//	int arr[2][4] = { {1,2,3,4},{5,6,7,8}};
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] %p ",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
void bubble_sort(int arr[] ,int sz)//冒泡排序
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
					 //每一趟冒泡排序
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}


}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//在sizeof内放数组是整个数组的大小
	bubble_sort(arr,sz);                  //放的不是首字母地址
	for (i = 0; i < 10; i++)              //&数组名，数字名代表整个数组
	{                                     //&数组名，取出的是整个数组的地址
		printf("%d ",arr[i]);
	}
	return 0;
}














