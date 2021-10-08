#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main() {

	//int ch = 0;
	//EOF-文件结束标志-1
	/*while (ch=getchar()!=EOF)
	{
		putchar(ch);
	}*/
	int ch = 0;
	int reset;
	char password[10] = {0};
	printf("请输入密码:\n");
	scanf("%s", password);//  1234
	//getchar();//读走\n
	//用getchar读取字符
	while (ch=getchar()!='\n')
	{
		;
	}

	printf("请确认密码是否正确:Y/N\n");
	reset=getchar();//  \n
	if (reset=='Y')
	{
		printf("密码输入正确!\n");
	}
	else
	{
		printf("密码输入错误!\n");
	}

	//ASCII码表

	printf("==========================\n");
	//只输出数字,不输出字符
	while ((ch = getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}






	return 0;
}

