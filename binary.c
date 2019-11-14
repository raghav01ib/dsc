
#include <stdio.h>
#include <stdlib.h>
typedef struct BST {
int data;
struct BST *lchild,*rchild;
} node;

	void insert (node*,node*);
	void inorder(node*);
	void preorder(node*);
	void postorder(node*);
	node*search(node*,int,node**);

void main(){
	int choice;
		char ans='N';
	int key;
		node*new_node,*root,*tmp,*parent;
		node*get_node();
		root=NULL;
	printf("\nProgram for Binary Search Tree");
do{
	printf("\n1.Create");
	printf("\n2.Search");
	printf("\n3.Display Preorder");
	printf("\nExit");
	printf("\nEnter your choice ");
	scanf(" %d",&choice);
		switch(choice){
	case 1:
		do{
		new_node=get_node();
		printf("\nEnter the Element ");
		scanf("%d",&new_node->data);
			if(root==NULL)/*Tree is not created*/
			root=new_node;
			else
			insert(root,new_node);
	printf("\nWant to enter more elements? (y/n) ");
	scanf(" %c",&ans);
		}while (ans=='y');
		break;

	case 2:
		printf("\nEnter elements to be searched ");
		scanf(" %d",&key);
		tmp=search(root,key,&parent);
		printf("\nParent of node %d is %d",tmp->data,parent->data);
			break;
	
	case 3:
		if(root==NULL)
		printf("tree is not created");
		else{
			printf("\nThe preorder display: ");
			inorder(root);
				}
			break;
			}
		}while (choice != 4);
		}
		/*Get new node*/
			node*get_node(){
			node*temp;
			temp=(node*)malloc(sizeof(node));
		temp->lchild = NULL;
		temp->rchild = NULL;
	return temp;
	}
		/*This function is for creating a binary search tree*/
	void insert(node*root,node*new_node){
		if (new_node->data<root->data){
			if(root->lchild==NULL)
				root->lchild=new_node;
			else
				insert(root->lchild,new_node);
			}
		if(new_node->data>root->data){
			if(root->rchild==NULL)
				root->rchild=new_node;
			else
				insert(root->rchild,new_node);
				}
			}
	/*This functio is for searching the node from binary search tree*/
	node*search(node*root,int key,node**parent){
	node*temp;
		temp=root;
			while(temp!=NULL){

	if(temp->data==key){
		printf("\nThe %d Element is present",temp->data);
			return temp;
			}
			*parent=temp;
	if(temp->data>key)
		temp=temp->lchild;
	else
		temp=temp->rchild;
		}
	return NULL;
	}
		/*This functio displays the tree in inorder fashion*/
	void inorder(node*temp){
		if(temp!=NULL){
	inorder(temp->lchild);
	printf("%d",temp->data);
		inorder(temp->rchild);
		}
	}	








