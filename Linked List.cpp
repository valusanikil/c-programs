#include<stdio.h>
#include<stdlib.h>
int value;
int null=0;
struct node
{
	int data;
	struct node *next;
};
	void insertionatbegin();
	void insertionatend();
	void deletion();
	void display();
	
int main()
{
	int choice;
	struct node *head=(struct node*)malloc(sizeof(struct node));
	printf("enter the choice:");
	scanf("%d",&choice);
	while(1)
	{
		switch(choice)
		{
		case  1: 	insertionatbegin();
					break;
		case  2:	insertionatend();
					break;
		case  3:	deletion();
					break;
		case  4:	display();
					break;
		default: 	printf("invalid option");
					break;
		}
					
					
	}
	
return 0;
}
void insertionatbegin(int data)
{
	int data;
	struct node *head;
	printf("enter the data:");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=null;
	if(head==null)
	{
		newnode->next=head;
		head=newnode;
	}
	
}
void insertionatend(int value)
{
	int data;
	struct node *head;
	printf("enter the value:");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=null;
	if(head==null)
	{
		printf("list is empty");
	}
	else
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp=head;
		while(temp!=null)
		{
			temp=temp->next;
		}
		temp->data=data;
		temp->next=null;
	}
	 
}
void deletion()
{
	if(head==null)
	{
		printf("list is empty");
	}
	else
	{
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp=head;
		head=head->next;
		free(temp);
	}
}
void display()
{
	struct node *head;
	if(head==null)
	{
		printf("list is empty");
	}
	else
	{
		struct node *ptr=(struct node*)malloc(sizeof(struct node);
		while(ptr!=null)
		{
			ptr=ptr->next;
			printf("%d",ptr->data);
		}
		
	}
}

