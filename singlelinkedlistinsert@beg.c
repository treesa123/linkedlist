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
char ch;
struct student *temp;

int i=0;
while(i<3)
{
temp=(struct student *)malloc(sizeof(struct student));
printf("Enter the rollno and name\n");
scanf("%d",&temp->roll);
scanf("%s",temp->name);
temp->next=hptr;
hptr=temp;
i=i+1;
}


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

