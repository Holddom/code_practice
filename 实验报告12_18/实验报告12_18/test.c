#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void sort(char** p)
//{
//	//*(p+i)��ʾ��ĳһ�ַ������׵�ַ ����������strcmp
//	int i = 0; int j = 0; int max = 0; char* tmp = NULL;
//	//ѡ������
//	for (i = 0; i < 2; i++)
//	{
//		max = i;
//		for (j = i + 1; j < 3; j++)
//		{
//			if (strcmp(*(p + max), *(p + j)) > 0)
//				max = j;
//		}
//		tmp = *(p + max); *(p + max) = *(p + i); *(p + i) = tmp;
//
//	}
//}
//int main()
//{
//	char str[3][10];
//	char* p[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		gets(str[i]);
//	for (i = 0; i < 3; i++)
//		p[i] = str[i];
//	sort(&p[0]);
//	for (i = 0; i < 3; i++)
//		printf("%s\n", p[i]);
//	return 0;
//}
#pragma pack(2)//�޸�Ĭ�϶�����
struct S
{
	char a;
	int b;
	char c;
};
#pragma pack()
int check_sys()//��С�˵ļ���
{
	union U {
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	printf("%d", sizeof(struct S));
	return 0;
}