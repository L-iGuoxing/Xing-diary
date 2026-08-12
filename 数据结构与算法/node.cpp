#include<stdio.h>
#include<stdlib.h>
typedef int elemtype;
typedef struct node{
	elemtype data;
	struct node *next;
}Node;
Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}
void inserthead(Node *L,elemtype e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;
}
void inserttail(Node *L,elemtype e)
{
	while(L->next!=NULL)
	{
		L=L->next;
	}
	Node *p=(Node*)malloc(sizeof(Node));
	L->next=p;
	p->data=e;
	p->next=NULL;
}
void insertnode(Node* L,int n,elemtype e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	for(int i=0;i<n-1;i++)
	{
		L=L->next;
		if(L==NULL)
		{
			printf("当前链表元素个数不足%d个,因此无法插入该位置\n",n-1);
			break;
		}
	}
	p->next=L->next;
	p->data=e;
	L->next=p;
}
void deletenode(Node *L,int n)
{
	for(int i=0;i<n-1;i++)
	{
		L=L->next;
			if(L==NULL)
			{
				printf("当前链表元素个数不足%d个,因此无法删除该位置\n",n-1);
				break;
			}
	}
	Node *q=(Node*)malloc(sizeof(Node));
	q=L->next;
	L->next=q->next;
	free(q);
}
int length(Node *L)
{ 
	int i=0;
	for(i=0;;i++)
	{
		if(L->next!=0)
		{
			L=L->next;
		}
		else
		{
			break;
		}
	}
	return i;
}
void shownode(Node *L)
{
//	Node *p=(Node*)malloc(sizeof(Node));
	while(L->next!=NULL)
	{
		L=L->next;
		printf("%d ",L->data);
	}
}
void freenode(Node *L)
{
	Node *p=L->next;
	Node *q=p->next;
	while(p!=NULL)
	{
		free(p);
		p=q;
		q=q->next;
	}
	L->next=NULL;
}
int main()
{
	Node *L;
	L=initlist();
	inserthead(L,10);
	inserthead(L,20);
	inserttail(L,40);
	inserttail(L,50);
	insertnode(L,5,34);
	deletenode(L,5);
	shownode(L);
	printf("%d",length(L));
	return 0;
}
