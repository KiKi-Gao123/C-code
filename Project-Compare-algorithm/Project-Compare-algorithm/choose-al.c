#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int k;
	printf("������Ҫ���ҵ�����ֵ:\n");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("======================================\n");
	int i = 0;
	for ( i = 0; i <sz; i++)
	{
		if (k == arr[i]) {
			printf("�ҵ���,�ű�Ϊ:%d\n", i);
			break;
		}
		/*else
		{
			printf("û�ҵ�!!!\n");
		}*/
	}

	if (i == sz) {

		printf("û�ҵ�!!!\n");

	}

	printf("======================================\n");
	int j;
	printf("������Ҫ���ҵ�����:\n");
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
			printf("�ҵ���,�ű�Ϊ:%d\n", mid);
			break;
		}

	}
	if (left > right) {

		printf("û�ҵ�!!!\n");
	}
	return 0;
}