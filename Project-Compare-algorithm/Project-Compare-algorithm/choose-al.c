#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int k;
	printf("请输入要查找的数的值:\n");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("======================================\n");
	int i = 0;
	for ( i = 0; i <sz; i++)
	{
		if (k == arr[i]) {
			printf("找到了,脚标为:%d\n", i);
			break;
		}
		/*else
		{
			printf("没找到!!!\n");
		}*/
	}

	if (i == sz) {

		printf("没找到!!!\n");

	}

	printf("======================================\n");
	int j;
	printf("请输入要查找的数据:\n");
	scanf("%d", &j);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]<j)
		{
			left = mid+1;
		}
		else if(arr[mid]>j)
		{
			right = mid - 1;
		}
		else {
			printf("找到了,脚标为:%d\n", mid);
			break;
		}

	}
	if (left > right) {

		printf("没找到!!!\n");
	}
	return 0;
}