#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//switch(*����*����*���ʽ*){�����}
	int day;
	printf("������������ڼ�:\n");
	scanf("%d", &day);
	switch (day)
	{
		//break��������case���
	case 1:
		printf("����һ\n"); break;
	case 2:
		printf("���ڶ�\n"); break;
	case 3:
		printf("������\n"); break;
	case 4:
		printf("������\n"); break;
	case 5:
		printf("������\n"); break;
	case 6:
		printf("������\n"); break;
	case 7:
		printf("������\n"); break;
	default:
		printf("�������!!!\n");
		break;
	}
	printf("=====================\n");
	int day1;
	printf("������������ڼ�:\n");
	scanf("%d", &day1);
	switch (day1)
	{
		//break��������case���
	case 1:
		
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("������\n"); break;
	case 6:
		
	case 7:
		printf("��Ϣ��\n"); break;
	default:
		printf("�������!!!\n");
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
		{//switch��Ƕ��
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