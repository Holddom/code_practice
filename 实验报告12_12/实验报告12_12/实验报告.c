#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int ret1, ret2;
void multiple(int a,int b)
{
	int n = a % b;
	while (n)
	{
		a = b;
		b = n;
		n = a % b;
	}
	ret1 = b;
}
void divisor(int a,int b,int ret)
{
	ret2 = a * b / ret1;
}
int main()
{
	int a, b; int tmp = 0; 
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		tmp = a; a = b; b = tmp;
	}
	 multiple(a, b);//���Լ��
	  divisor(a,b,ret1);//��С������
	printf("���Լ���ǣ�%d   ��С�������ǣ�%d", ret1, ret2);
	return 0;
}