#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()  //�������������С
{

	int a[3][4] = { {9,80,205,40}, {90,-60,96,-1} ,{210,-3,101,89} };
	int i = 0; int j = 0; int row = 0; int col = 0;
	int max = 0; int count = 0;
	//����һ��������
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if(a[i][max] < a[i][j])//����i��������һ�����������������п����ǲ���һ������С��
			    max = j;
		}
		
		for (row = 0; row < 3; row++)
		{
			if (a[row][max] < a[i][max])
				break;
		}
		if (row == 3)
		{
			printf("�����ǣ�%d\n", a[i][max]);
			count++;
		}
	}
	if (count == 0)
		printf("û�а���\n");
	return 0;
}
