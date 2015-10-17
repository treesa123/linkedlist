#include<stdio.h>
void print(struct link *p);
void enter(int);
int data;
struct link
{
int value;
int *l;
int *r;
}*p;


void main()
{
int i;
struct link *root=NULL;
p=(struct node *)malloc(sizeof(struct link));
for(i=0;i<4;i++)
{
	printf("enter the data to be entered\n");
	scanf("%d",&data);
	p->value=data;
	p->r=NULL;
	p->l=NULL;
	if(root==NULL)
	{
	root=p;
	}

	else
	{
	enter(data);
	root=p;
	}
}

print(root);

}

void enter(int data)
{
	if((p->value>data) && (p->r==NULL))
	p->r=data;
	
	if((p->value>data) && (p->r!=NULL))
	enter(p->r);

	if((p->value<data) && (p->l==NULL))
	p->l=data;

	if((p->value<data) && (p->r!=NULL))
	enter(p->l);
}




void print(struct link *p)
{
struct link *root;
printf("the linked list data elements are as follows\n");
if(root==NULL)

printf("the tree is empty\n");



if(p->l!=NULL)
printf("%d",p->value);
//return;
print(p->l);


if(p->l!=NULL)
print(p->r);
//printf("%d",p->value);
//p=p->r;
//printf("%d",p->value);
//printf("%d",p->l->value);
//printf("%d",p->r->value);



}
