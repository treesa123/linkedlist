#include<stdio.h>
#include<malloc.h>

void print();
void insert();
void delete();
struct st
{
int roll;
struct st * next;
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
int i=0;
while(i<=2)
{
delete();
printf("Printing afer deletion\n");
print();i++;

}
}

void insert()
{
	struct st *t,*tr;
	t=(struct st *)malloc(sizeof(struct st));
	printf("Enter the roll number\n");
	scanf("%d",&t->roll);

	if(hptr==0)
	{
	hptr=t;
	t->next=0;
	}

	else
	{
	tr=hptr;
	while(tr->next)
	{
		tr=tr->next;
	}
	tr->next=t;
	t->next=0;
	}
}


void print()
{	struct st *t;
	t=hptr;
	while(t)
	{
		printf("%d\t",t->roll);
		t=t->next;
	}printf("\n");

}

void delete()
{int num;
struct st *t,*tr;
printf("Enter the number to be deleted\n");
scanf("%d",&num);
t=hptr;

	if(t->roll==num)
	{
	hptr=t->next;
	free(t);
	t=NULL;
	return;
	}

	else
	{
	//t=t->next;
	while(t->roll!=num)
	{
	tr=t;
	t=t->next;
	}

	if(t->next==0)
	{
	tr->next=0;
	free(t);
	t=NULL;
	return;
	}


	else
	{
	tr->next=t->next;
	free(t);t=NULL;
	return;
	}
}

}
