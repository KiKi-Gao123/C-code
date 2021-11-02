#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求x,y的较大值
int getMax(int x, int y) {
	if (x > y) {
		return	x;
	}
	else
	{
		return y;
	}
}
//交换两个整型变量的内容
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
	printf("最大值=%d\n", max);
	num_Change(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}