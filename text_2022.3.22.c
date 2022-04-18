#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
///*int main()
//{
//	/*int i = 1;*/
//	/*while(i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d为奇数 ", i);
//		else
//			printf("%为偶数 ",i);
//		i++;
//	}*/
//	/*while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//	return 0;*/
//
//
//}*/
//int main()
//{
//	int day = 0;
//	int i = 0;
//	while(i<=5)
//	{ 
//	scanf("%d", &day);
//	switch (day)
//	{
//		//case 1:
//		//		printf("星期1\n");
//		//		break;
//		//case 2:
//		//		printf("星期2\n");
//		//		break;
//		//case 3:
//		//	printf("星期三\n");
//		//	break;
//			///switch(整形)   case（整形常量表达式）：
//		//switch  判断与哪一个case相匹配 ===从哪里开始
//		//不遇到break不退出
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日 ");
//		break;
//	case 6:
//	case 7:
//		printf("休息日 ");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}//<---switch的域
//	i++;
//	}//<---while的域
//    return 0;
//}
//循环语句    while ***for ***** do whlie
int main()
{
	int i = 0;
	while (i<5)
	{
		i++;
	  if (i == 5)
		  continue;
	  printf("%d\n",i);
	  //i++;//死循环
	}//continune 结束本次循环后面的代码 开始下次while的判断循环 
	 //  break 结束循环
	return 0;
}









