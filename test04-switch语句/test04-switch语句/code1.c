#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//switch(*整型*常量*表达式*){语句项}
	int day;
	printf("请输入今天星期几:\n");
	scanf("%d", &day);
	switch (day)
	{
		//break用于跳出case语句
	case 1:
		printf("星期一\n"); break;
	case 2:
		printf("星期二\n"); break;
	case 3:
		printf("星期三\n"); break;
	case 4:
		printf("星期四\n"); break;
	case 5:
		printf("星期五\n"); break;
	case 6:
		printf("星期六\n"); break;
	case 7:
		printf("星期日\n"); break;
	default:
		printf("输入错误!!!\n");
		break;
	}
	printf("=====================\n");
	int day1;
	printf("请输入今天星期几:\n");
	scanf("%d", &day1);
	switch (day1)
	{
		//break用于跳出case语句
	case 1:
		
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("工作日\n"); break;
	case 6:
		
	case 7:
		printf("休息日\n"); break;
	default:
		printf("输入错误!!!\n");
		break;
	}


	printf("=====================\n");
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;//m=3
	case 2:n++;//n=2
	case 3:
		switch (n)
		{//switch的嵌套
		case 1:n++;
		case 2:m++; n++; break;//m=4,n=3
		default:
			break;
		}
	case 4:m++;//m=5,n=3
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);//m=5,n=3

	printf("=====================\n");

	return 0;
}