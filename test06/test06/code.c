#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main() {

	//int ch = 0;
	//EOF-�ļ�������־-1
	/*while (ch=getchar()!=EOF)
	{
		putchar(ch);
	}*/
	int ch = 0;
	int reset;
	char password[10] = {0};
	printf("����������:\n");
	scanf("%s", password);//  1234
	//getchar();//����\n
	//��getchar��ȡ�ַ�
	while (ch=getchar()!='\n')
	{
		;
	}

	printf("��ȷ�������Ƿ���ȷ:Y/N\n");
	reset=getchar();//  \n
	if (reset=='Y')
	{
		printf("����������ȷ!\n");
	}
	else
	{
		printf("�����������!\n");
	}

	//ASCII���

	printf("==========================\n");
	//ֻ�������,������ַ�
	while ((ch = getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}






	return 0;
}

