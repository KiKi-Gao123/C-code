#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {

	//for(���ʽ1;���ʽ2;���ʽ3)	ѭ�����;
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", i + 1);//12345678910
	}

	printf("\n");
	for (int j = 1; j <=10; j++)
	{
		if (j == 5)
			break;
		printf("%d	", j);//1234
	}
	printf("\n");
	for (int k = 1; k <= 10; k++)
	{
		if (k == 5)
			continue;
		printf("%d	", k);//1234678910
	}
	return 0;
}