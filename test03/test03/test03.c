#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//分号也是一种语句:空语句
	;
	//选择语句:if...else...
	//选择语句:if...else if... else...
	int age = 18;
	if (age<18)
	{
		printf("未成年!\n");
	}
	else {
		printf("成年!\n");
	}

	printf("==========================\n");
	int age1 = 10;
	if (age1<18)
	{
		printf("未成年!\n");
	}
	else if(age1>=18&&age1<=30){
		printf("青年!\n");
	}
	else
	{
		printf("中年!\n");
	}

	printf("==========================\n");

	int age2 = 25;
	if (age2 < 18)
	{
		printf("未成年!\n");
	}
	else
	{
		if (age2 >= 18 && age2 <= 30) {
			printf("青年!\n");
		}
		else
		{
			printf("中年!\n");
		}

	}
	printf("==========================\n");
	//0表示假,非0表示真

	//悬空else问题,else和它最近的未匹配的if匹配
	int a = 0;
	int b = 2;
	if (a == 1)//为假,不进入选择语句
		if (b == 2)
			printf("呵呵呵呵呵!\n");
	    else
		    printf("哈哈哈哈哈!\n");
	//什么都不输出
	printf("==========================\n");
	int a1 = 0;
	int b1 = 2;
	if (a1 == 1)//为假,不进入选择语句
	{
		if (b1 == 2)
			printf("呵呵呵呵呵!\n");
	}
	else
			printf("哈哈哈哈哈!\n");
	printf("==========================\n");
	//书写形式对比
	//把常量放在左边比较相等






	return 0;
}