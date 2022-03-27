#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()  //鞍点行最大，列最小
{

	int a[3][4] = { {9,80,205,40}, {90,-60,96,-1} ,{210,-3,101,89} };
	int i = 0; int j = 0; int row = 0; int col = 0;
	int max = 0; int count = 0;
	//先找一行里最大的
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if(a[i][max] < a[i][j])//这是i行里最大的一个数，针对这个数的列看看是不是一列里最小的
			    max = j;
		}
		
		for (row = 0; row < 3; row++)
		{
			if (a[row][max] < a[i][max])
				break;
		}
		if (row == 3)
		{
			printf("鞍点是：%d\n", a[i][max]);
			count++;
		}
	}
	if (count == 0)
		printf("没有鞍点\n");
	return 0;
}
