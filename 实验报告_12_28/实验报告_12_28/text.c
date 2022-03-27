#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node  //�������
{
	int num;
	char name[10];
	char sex[3];
	int age;
	struct node* next;
}node;
//��������
node* create()
{
	printf("������Ҫ���ɵ�������>:\n");
		int len = 0;
		scanf("%d", &len);
	node* p = (node*)malloc(sizeof(node));
	node* head = NULL;
	if (p != NULL)
	{
		head = p; head->next = NULL;
		node* bridge = p;
		printf("�������һ���˵�ѧ�ţ��������Ա�����\n");
		scanf("%d", &bridge->num); scanf("%s", bridge->name); scanf("%s", bridge->sex); scanf("%d", &bridge->age);
		int i = 0;//��������Ϊ10��������
		for (i = 1; i < len; i++)
		{
			p = (node*)malloc(sizeof(node));
			if (p != NULL)
			{
				bridge->next = p;
				bridge = p;
				printf("�������%d���˵�ѧ�ţ��������Ա�����\n",i+1);
				scanf("%d", &bridge->num); scanf("%s", bridge->name); scanf("%s", bridge->sex); scanf("%d", &bridge->age);
				bridge->next = NULL;
			}
		}
	}
	return head;
}
//����Ĵ�ӡ
void print(const node* p)
{
	node* ptr = p;
	while (ptr!= NULL)
	{
		printf("ѧ��:%d ����:%s �Ա�%s ����:%d\n", ptr->num, ptr->name, ptr->sex, ptr->age);
		if (ptr->next != NULL)
			ptr = ptr->next;
		else
			break;
	}

}
//��������ɾ���ڵ�
node* del(node* p,int age)
{
	node* head = p;
	node* ptr = p; node* bridge = NULL;
	//������������ͷ��
	if (ptr->age == age)
	{
		bridge = ptr->next;
		free(ptr);
		return bridge;
	}
	else
	{
		bridge = ptr;
		ptr = ptr->next;
	}
	while (ptr != NULL)  //��������������ط�
	{
		if (ptr->age == age)
		{
			bridge->next = ptr->next;
			free(ptr);
			return head;
		}
		bridge = ptr;
		ptr = ptr->next;
	}
	printf("Ҫɾ�������䲻����\n");
	return head;
}
int main()
{
	int year;
	node* list = create();
	print(list);
	printf("����һ�������Թ�ɾ�����>:\n");
	scanf("%d", &year);
	list = del(list, year);
	print(list);
	node* p;
	while (list)
	{
		p = list;
		list = list->next;
		free(p);
	}
	return 0;
}