/*1. �����������α�����ֵ��������ֵ�����ݽ��н�����
2. ����������ʱ���������������������ݣ������⣩
3.��10 �����������ֵ��
4.�����������Ӵ�С�����

5.�������������Լ����*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int greatest(int a, int b){
	if (b != 0)
		return greatest(b, a%b);
	else
		return a;
}
void dzx(int a, int b, int c){
	if (a > b){
		if (c>a)
			printf("%d %d %d\n", c, a, b);
		else if (c>b)
			printf("%d %d %d\n", a, c, b);
		else
			printf("%d %d %d\n", a, b, c);
	}
	else{
		if (c>b)
			printf("%d %d %d\n", c, b, a);
		else if (c>a)
			printf("%d %d %d\n", b, c, a);
		else
			printf("%d %d %d\n", b, a, c);
	}
}
int maxInt(int arr[]){
	int max = 0;
	for (int i = 0; i < 10; i++){
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
void swap1(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);
}
void swap2(int a, int b){
	a = a+b;
	b = a - b;
	a = a - b;
	printf("a = %d, b = %d\n", a, b);
}
void swap3(int a, int b){
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);
}
int main(){
	/*int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	swap1(a, b);
	swap2(a, b);
	swap3(a, b);

	int arr[10];
	for (int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	maxInt(arr);*/


	//int c = 0;
	//int d = 0;
	//int e = 0;
	//scanf("%d %d %d", &c, &d, &e);
	//dzx(c,d,e);

	int f = 0;
	int g = 0;
	scanf("%d %d ", &f, &g);
	greatest(f, g);

	system("pause");
	return 0;
}