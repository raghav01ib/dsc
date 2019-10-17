/*To write a program that perform insertion, deletion into/from a Singly linked list.
*/
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
	int data;
	struct node *next;
};
struct node *first=NULL;
int main()      
{
	int choice;
	while(1)
 	{
  		printf("****SINGLE LINKED LIST OPERATIONS:****\n");
  		printf("MENU\n");
  		printf("---------------------------------------\n");
  		printf("1.Create\n");
  		printf("2.Display\n");
  		printf("3.Insert at the beginning\n");
  		printf("4.Insert at the end\n");
  		printf("5.Insert at specified position\n");
  		printf("6.Delete from beginning\n");
  		printf("7.Delete from the end\n");
  		printf("8.Delete from specified position\n");
  		printf("9.Exit\n");
  		printf("--------------------------------------\n");
  		printf("Enter your choice:\t");
  		scanf("%d",&choice);
  		switch(choice)
  		{
   			case 1:
          			create();
         			break;
   			case 2:
          			display();
          			break;
   			case 3:
          			insert_begin();
          			break;
   			case 4:
          			insert_end();
          			break;
   			case 5:
          			insert_pos();
          			break;
   			case 6:
          			delete_begin();
          			break;
   			case 7:
          			delete_end();
          			break;
   			case 8:
          			delete_pos();
          			break;
   			case 9:
          			exit(0);
          			break;
   			default:
           			printf("Wrong Choice:\n");
           			break;
  		}//end of switch()
 	}
 	return 0;
}      
void create()
{
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
 	if(temp==NULL)
 	{
  		printf("Out of Memory Space:\n");
  		exit(0);
 	}
 	printf("Enter the data value for the node:\t");
 	scanf("%d",&temp->data);
 	temp->next=NULL;
 	if(first==NULL)
 	{
 		first=temp;
	}
 	else
 	{
 		ptr=first;
  		while(ptr->next!=NULL)
  		{
   			ptr=ptr->next;
  		}
  		ptr->next=temp;
 	}
}     
void display()
{
	struct node *ptr;
 	if(first==NULL)
 	{
  		printf("List is empty:\n");
  		return;
 	}
 	else
 	{
  		ptr=first;
  		printf("The List elements are:\n");
  		while(ptr!=NULL)
  		{
   			printf("%d\t",ptr->data );
   			ptr=ptr->next ;
  		}    
 	}        
}       
void insert_begin()
{
	struct node *temp;
 	temp=(struct node *)malloc(sizeof(struct node));
 	if(temp==NULL)
 	{
  		printf("Out of Memory Space:\n");
  		return;
 	}
 	printf("Enter the data value for the node:\t" );
 	scanf("%d",&temp->data);
 	temp->next =NULL;
 	if(first==NULL)
 	{
 		first=temp;
 	}
 	else
 	{
 		temp->next=first;
  		first=temp;
 	}
}      
void insert_end()
{
	struct node *temp,*ptr;
 	temp=(struct node *)malloc(sizeof(struct node));
 	if(temp==NULL)
 	{
 		printf("Out of Memory Space:\n");
  		return;
 	}
 	printf("\nEnter the data value for the node:\t" );
 	scanf("%d",&temp->data );
 	temp->next =NULL;
 	if(first==NULL)
 	{
  		first=temp;
 	}
 	else
 	{
 		ptr=first;
  	while(ptr->next!=NULL)
  	{
   		ptr=ptr->next ;
  	}
  	ptr->next =temp;
 	}
}      
void insert_pos()
{
	struct node *ptr,*temp;
 	int i,pos;
 	temp=(struct node *)malloc(sizeof(struct node));
 	if(temp==NULL)
 	{
  		printf("Out of Memory Space:\n");
  		return;
 	}
 	printf("Enter the position for the new node to be inserted:\t");
 	scanf("%d",&pos);
 	printf("Enter the data value of the node:\t");
 	scanf("%d",&temp->data);
 	temp->next=NULL;
 	if(pos==0)
 	{
 		temp->next=first;
  		first=temp;
 	}
 	else
 	{
  		for(i=0,ptr=first;i<pos-1;i++)
  		{
   			ptr=ptr->next;
   			if(ptr==NULL)
   			{
    				printf("Position not found:[Handle with care]\n");
    				return;
   			}
  		}
  		temp->next =ptr->next ;
  		ptr->next=temp;
 	}      
}   
void delete_begin()
{
	struct node *ptr;
 	if(ptr==NULL)
 	{
 		printf("\nList is Empty:\n");
  		return;
 	}
 	else
 	{
  		ptr=first;
  		first=first->next ;
  		printf("\nThe deleted element is :%d\t",ptr->data);
  		free(ptr);
 	}
}    
void delete_end()
{
	struct node *temp,*ptr;
 	if(first==NULL)
 	{
 		printf("\nList is Empty:");
  		exit(0);
 	}
 	else if(first->next==NULL)
 	{
 		ptr=first;
  		first=NULL;
  		printf("\nThe deleted element is:%d\t",ptr->data);
  		free(ptr);
 	}
 	else
 	{
  		ptr=first;
  		while(ptr->next!=NULL)
  		{
   			temp=ptr;
   			ptr=ptr->next;
  		}
  		temp->next=NULL;
  		printf("\nThe deleted element is:%d\t",ptr->data);
  		free(ptr);
 	}
} 
void delete_pos()
{
	int i,pos;
 	struct node *temp,*ptr;
 	if(first==NULL)
 	{
  		printf("\nThe List is Empty: ");
  		exit(0);
 	}
 	else
 	{
  		printf("\nEnter the position of the node to be deleted:\t");
  		scanf("%d",&pos);
  		if(pos==0)
  		{
   			ptr=first;
   			first=first->next ;
   			printf("\nThe deleted element is:%d\t",ptr->data);
   			free(ptr);
  		}
  		else
  		{
   			ptr=first;
   			for(i=0;i<pos;i++)
   			{
    				temp=ptr;
    				ptr=ptr->next ;
    				if(ptr==NULL)
    				{
     					printf("\nPosition not Found:\n");
     					return;
    				}
   			}
   			temp->next =ptr->next ;
   			printf("The deleted element is:%d\t",ptr->data );
   			free(ptr);
  		}
 	}
}
