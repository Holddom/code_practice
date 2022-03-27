#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu 
{
	int num;
	char name[10];
	float grade[3];
	float ave;
}s[5];
int main()
{
	int i = 0; int j = 0; int tmp = 0;
	FILE* pf = fopen("stud.txt", "r");
	if (pf == NULL)
	{
		perror("main");
		return 1;
	}
	for (i = 0; i < 5; i++)
	{
		if(fread(&s[i], sizeof(s), 1, pf)!=1);
		{
			printf("¶ÁÈ¡Ê§°Ü");
			return 1; }

	}
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if (s[0].ave < s[j].ave)
			{
				tmp = s[0].ave;
				s[0].ave = s[j].ave;
				s[j].ave = tmp;
			}

	fclose(pf);
	pf = NULL;
	return 0;
}