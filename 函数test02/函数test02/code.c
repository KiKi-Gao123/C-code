#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��x,y�Ľϴ�ֵ
int getMax(int x, int y) {
	if (x > y) {
		return	x;
	}
	else
	{
		return y;
	}
}
//�����������ͱ���������
void num_Change(int* x, int* y) {
	int temp=0;
	temp = *x;
	*x = *y;
	*y = temp;

}
int main(){

	int a = 10;
	int b = 5;
	int max=getMax(a, b);
	printf("���ֵ=%d\n", max);
	num_Change(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}