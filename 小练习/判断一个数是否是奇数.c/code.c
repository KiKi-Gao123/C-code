#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//�ж������һ��������������ż��
	int a;
	printf("������һ����:\n");
	//��ȡ����a
	scanf("%d", &a);
	if (a%2!=0)
	{
		printf("%d������!\n", a);
	}
	else
	{
		printf("%d��ż��!\n", a);
	}
	printf("==========================\n");

	//���1~100֮�����������
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