#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int Add(int x, int y) {
//	int z;
//	z = x + y;
//	return z;
//}
//
//
//int main() {
//	int a=4;
//	int b=6;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main() {
//
//	//strlen-�ַ�������
//	//strcpy-�ַ�������
//	char arr1[] = "abc";
//	char arr2[] = "gbf";
//	strcpy(arr2, arr1);//��arr1������arr2 �� 
//	printf("%s\n", arr2);
//	return 0;
//}

int main() {

	//memset(void *ptr , int value,size_t num); �ڴ�����
	char arr[] = "hello world";
	memset(arr, '$', 5);
	printf("%s\n", arr);//$$$$$ world
	return 0;
}