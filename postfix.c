#define SIZE 50
#include <ctype>

int s[SIZE];
int top = -1;

push (intelem)
{
	s[++top]=elem;
}
int pop()
{
	return (s[top--]);
}
main ()
{

char pofx[50],ch;
int i = 0,op1,op2;
	printf("\n Enter the Postfix Expression");
	scanf("%s",pofx);
	
	while( (ch=pofx[i++])!='')
{
if (isdigit(ch)) push (ch-'0');
else
{	
	op2=pop();
	op1=pop();
	switch (ch)
{

	case '+':push(op1+op2);break;
	case '-':push(op1-op2);break;
	case '*':push(op1*op2);break;
	case '/':push(op1/op2);break;
	}
}
}

printf("\nGiven postfix expression:%s",pofx);
printf("\n Results after Evaluation: %d",s[top]);
}

