/*
OUTPUT: 
	Enter the Number of elements:3

1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:1
Enter the element:9

Inserted 9
1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:1
Enter the element:8

Inserted 8
1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:1
Enter the element:7

Inserted 7
1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:3
The element in queue are:
987
1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:2

 Deleted element9

1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:3
The element in queue are:
87
1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice:4

 Successful Exit
*/
#include<stdio.h>
int a[10];
void main()
{{
int n,item,ch,i;
	printf("Enter the Number of elements:");
	scanf("%d",&n);

int front = -1,rear=-1;
do
{{
	printf("\n1.ADD 2.DELETE 3.DISPLAY 4.EXIT");
	printf("Enter the choice:");
	scanf("%d",&ch);
	switch (ch)
{{
case 1:	printf("Enter the element:");
	scanf("%d",&item);
	if ((front == rear+1)||(front==0 && rear==n-1))
		printf("The Queue is full");
	else
	{
	if(front==-1)front =0;
		rear=(rear+1)%n;
		a[rear]=item;
 printf("\nInserted %d",item);
	}
	break;
case 2:
	if (front == -1)
		printf("\nCircular Queue is empty! Deletion is not possible!\n");
	else{
		item=a[front];
		if (front == rear){
		front=-1;
		rear=-1;
	}
	else{
		front=(front+1)%n;
	}
	printf("\n Deleted element%d\n",item);
	}
	break;
case 3:	
	if(front==-1)
	printf("\n Empty Queue\n");
	else
	{
	printf("The element in queue are:\n");
		for(i=front;i!=rear;i=(i+1)%n)
		{
	printf("%d",a[i]);
		}
	printf("%d",a[i]);
		}
	break;

default:
	printf("\n Successful Exit");
	break;
}}}}
while (ch!=4);
}
}
	



