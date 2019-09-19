/*
OBJECTIVE-To write op
NAME- Raghav Pandey
USN-18BBTCS094
DATE- 12/09/19
OUTPUT: Enter the Postfix Expression:53*

Given postfix expression:53*
 Results after Evaluation: 15

*/
#define SIZE 50
#include <ctype.h>
#include <stdio.h>

int s[SIZE];
int top = -1;

int push (int elem)
{
	s[++top]=elem;
}
int pop()
{
	return (s[top--]);
}
int main ()
{

char pofx[50],ch;
int i = 0,op1,op2;
	printf("\n Enter the Postfix Expression:");
	scanf("%s",pofx);
	
	while((ch=pofx[i++])!='\0')
{
if (isdigit(ch)) push (ch-'0');
else
{	
	op2=pop();
	op1=pop();
	switch (ch)
{

	case '+':push(op1+op2);
	break;
	case '-':push(op1-op2);
	break;
	case '*':push(op1*op2);
	break;
	case '/':push(op1/op2);
	break;
	}
}
}

printf("\nGiven postfix expression:%s",pofx);
printf("\n Results after Evaluation: %d",s[top]);
}

