#define _CRT_SECURE_NO_WARNINGS
//����
#include <stdio.h>
//int main()
//{  
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ�� ʣ�µ�Ĭ��Ϊ0
//	////sizeof()//�����arr��ռ�ռ��С
//	////strlen���ַ�������\0ֹͣ
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
void bubble_sort(int arr[] ,int sz)//ð������
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
					 //ÿһ��ð������
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
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
	int sz = sizeof(arr) / sizeof(arr[0]);//��sizeof�ڷ���������������Ĵ�С
	bubble_sort(arr,sz);                  //�ŵĲ�������ĸ��ַ
	for (i = 0; i < 10; i++)              //&��������������������������
	{                                     //&��������ȡ��������������ĵ�ַ
		printf("%d ",arr[i]);
	}
	return 0;
}














