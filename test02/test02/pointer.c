#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//�������
	int a = 10;
	//����ָ��
	int* p;
	p = &a;
	printf("a�ĵ�ַ:%p\n", &a);
	printf("=================\n");
	printf("a�ĵ�ַ:%p\n", p);
	printf("=================\n");

	//���ý����ò�����
	*p = 30;
	printf("a=%d\n", a);
}