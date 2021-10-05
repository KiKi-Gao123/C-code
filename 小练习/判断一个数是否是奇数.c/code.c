#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//判断输入的一个数是奇数还是偶数
	int a;
	printf("请输入一个数:\n");
	//获取数字a
	scanf("%d", &a);
	if (a%2!=0)
	{
		printf("%d是奇数!\n", a);
	}
	else
	{
		printf("%d是偶数!\n", a);
	}
	printf("==========================\n");

	//输出1~100之间的所有奇数
	int i = 1;
	while (i<100)
	{
		if (i % 2 == 1) {
			printf("%d\t", i);
		}
		i++;
	}
	printf("==========================\n");

	while (i < 100)
	{
		
		printf("%d\t", i);
		
		i = i + 2;
	}
	
	return 0;
}