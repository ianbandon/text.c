#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	size_t i = 0;
	char* ret = dest;
	while(count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,5,6,7 };
	int arr2[10] = { 0 };
	//arr1 ¿½±´µ½arr2ÖÐ
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (int i = 0; i <sizeof(ret); i++)
	{
		printf("%d ", ret[i]);
	}
	return 0;
}