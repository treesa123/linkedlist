#include<stdio.h>
#include<malloc.h>

void print();
void insert();

struct st
{
struct st *prv;
int roll;
struct st *next;
}*hptr;

void main()
{
char ch;
//printf("Do you want to continue\n");
//		scanf("%c",&ch);
//t=(struct st *)malloc(sizeof(struct st));

	do
	{
		
		insert();
		printf("Do you want to continue\n");
		scanf(" %c",&ch);
	}while((ch=='y') || (ch=='Y'));
	printf("Printing\n");
	print();
}


void insert()
{
struct st *t,*tr;
t=(struct st *)malloc(sizeof(struct st));
printf("*****");
printf("Enter the rollno\n");
		scanf("%d",&t->roll);
	if(hptr==0)
	{
		t->prv=hptr;
		t->next=hptr;
		hptr=t;
	}
	else
	{	tr=hptr;	
		while(tr->next)
		{
		//tr=t;
		tr=tr->next;
		}

	tr->next=t;//->prv=tr;
	t->prv=tr;	
t->next=0;
	}
}


void print()
{
struct st *p;
p=hptr;
	while(p)
	{
		printf("%d",p->roll);
		p=p->next;
	}
printf("\n");
}
