#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//定义变量
	int a = 10;
	//定义指针
	int* p;
	p = &a;
	printf("a的地址:%p\n", &a);
	printf("=================\n");
	printf("a的地址:%p\n", p);
	printf("=================\n");

	//利用解引用操作符
	*p = 30;
	printf("a=%d\n", a);
}