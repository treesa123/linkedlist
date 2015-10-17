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
		while(tr->next!=0)
		{
		tr=tr->next;
		}
	t->prv=tr;
	t->next=0;
	tr->next=t;
}
}

void print()
{
struct st *t1;
t1=hptr;
while(t1)
{
printf("%d\n",t1->roll);
t1=t1->next;
}
printf("\n");
}
	

	
	

