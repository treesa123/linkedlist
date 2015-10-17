#include<stdio.h>
#include<malloc.h>

void print();
void insert();
void delete();
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
	

	
	void delete()
{	int num;
	//t=(struct st *)malloc(sizeof(struct st));
struct st *t1,*tr,*t;
	printf("Enter the number u want to delete\n");
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
	t=t->next;
	while(t->roll!=num)
	{t=t->next;
	}



	if(t->next==0)
	{
	t->prv->next=0;
	free(t);
	t=NULL;
	return;
	}

	else
	{
	t1=t->next;
	t->prv->next=t1;
	free(t);
	t=NULL;
	return;
	}
}
	
}

