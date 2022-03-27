#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node  //创建结点
{
	int num;
	char name[10];
	char sex[3];
	int age;
	struct node* next;
}node;
//链表生成
node* create()
{
	printf("请输入要生成的链表长度>:\n");
		int len = 0;
		scanf("%d", &len);
	node* p = (node*)malloc(sizeof(node));
	node* head = NULL;
	if (p != NULL)
	{
		head = p; head->next = NULL;
		node* bridge = p;
		printf("请输入第一个人的学号，姓名，性别，年龄\n");
		scanf("%d", &bridge->num); scanf("%s", bridge->name); scanf("%s", bridge->sex); scanf("%d", &bridge->age);
		int i = 0;//建立长度为10个的链表
		for (i = 1; i < len; i++)
		{
			p = (node*)malloc(sizeof(node));
			if (p != NULL)
			{
				bridge->next = p;
				bridge = p;
				printf("请输入第%d个人的学号，姓名，性别，年龄\n",i+1);
				scanf("%d", &bridge->num); scanf("%s", bridge->name); scanf("%s", bridge->sex); scanf("%d", &bridge->age);
				bridge->next = NULL;
			}
		}
	}
	return head;
}
//链表的打印
void print(const node* p)
{
	node* ptr = p;
	while (ptr!= NULL)
	{
		printf("学号:%d 姓名:%s 性别：%s 年龄:%d\n", ptr->num, ptr->name, ptr->sex, ptr->age);
		if (ptr->next != NULL)
			ptr = ptr->next;
		else
			break;
	}

}
//链表按年龄删除节点
node* del(node* p,int age)
{
	node* head = p;
	node* ptr = p; node* bridge = NULL;
	//如果这个年龄在头部
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
	while (ptr != NULL)  //如果年龄在其他地方
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
	printf("要删除的年龄不存在\n");
	return head;
}
int main()
{
	int year;
	node* list = create();
	print(list);
	printf("输入一个年龄以供删除结点>:\n");
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