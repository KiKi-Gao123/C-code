#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//�ֺ�Ҳ��һ�����:�����
	;
	//ѡ�����:if...else...
	//ѡ�����:if...else if... else...
	int age = 18;
	if (age<18)
	{
		printf("δ����!\n");
	}
	else {
		printf("����!\n");
	}

	printf("==========================\n");
	int age1 = 10;
	if (age1<18)
	{
		printf("δ����!\n");
	}
	else if(age1>=18&&age1<=30){
		printf("����!\n");
	}
	else
	{
		printf("����!\n");
	}

	printf("==========================\n");

	int age2 = 25;
	if (age2 < 18)
	{
		printf("δ����!\n");
	}
	else
	{
		if (age2 >= 18 && age2 <= 30) {
			printf("����!\n");
		}
		else
		{
			printf("����!\n");
		}

	}
	printf("==========================\n");
	//0��ʾ��,��0��ʾ��

	//����else����,else���������δƥ���ifƥ��
	int a = 0;
	int b = 2;
	if (a == 1)//Ϊ��,������ѡ�����
		if (b == 2)
			printf("�ǺǺǺǺ�!\n");
	    else
		    printf("����������!\n");
	//ʲô�������
	printf("==========================\n");
	int a1 = 0;
	int b1 = 2;
	if (a1 == 1)//Ϊ��,������ѡ�����
	{
		if (b1 == 2)
			printf("�ǺǺǺǺ�!\n");
	}
	else
			printf("����������!\n");
	printf("==========================\n");
	//��д��ʽ�Ա�
	//�ѳ���������߱Ƚ����






	return 0;
}