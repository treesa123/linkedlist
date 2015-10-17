#include<stdio.h>
#include<malloc.h>

struct student
{
int roll;
char name[20];
struct student *next;
}* hptr=0,*p;

void main()
{
int ch;
struct student *temp;
struct student *t;

//int i=0;
//while(i<3)
//{
temp=(struct student *)malloc(sizeof(struct student));
printf("Enter the rollno and name\n");
scanf("%d",&temp->roll);
scanf("%s",temp->name);
temp->next=hptr;
hptr=temp;
//i=i+1;
//}

//printf("yo want to continue\n");
//scanf("%c",&ch);
int i=0;
//while(i<3)
//{
	while((temp->next==0) && (i<3))
	{
		
	t=(struct student *)malloc(sizeof(struct student));
	//t=temp->next;
	printf("Enter the rollno and name\n");
	scanf("%d",&t->roll);
	scanf("%s",t->name);
	
	t->next=0;
	temp->next=t;
	
	temp=t;
	//printf("yo want to continue\n");
	//scanf("%d",&ch);
	i++;
	}

//i++;
//}//while(ch==1);// || (ch=='Y'));


printf("Printing\n");
struct student *p;
p=hptr;

while(p)
{
printf("\np->roll=%d\n",p->roll);
printf("\np->name=%s\n",p->name);
p=p->next;
}
}

