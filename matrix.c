#include<stdio.h>
int main()
{
int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],opt,tr[20][20],opt1,ch,e,f;
printf("Enter the number of rows:"); 
scanf("%d",&m);
printf("Enter tht number of columns:");
scanf("%d",&n); 
printf("Enter the data elements of first matrices\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
scanf("%d",&a[i][j]);
   }
  }
printf("enter the number of rows for second matrices:");
scanf("%d",&e);
printf("enter the number of columns:");
scanf("%d",&f);
printf("enter the data elements of second matrices:");
 for(i=0;i<e;i++)
  {
   for(j=0;j<f;j++)
    {
scanf("%d",&b[i][j]);
    }
  }
do
 {
 if(m==e&&n==f)
 {
 printf("enter 1 for adition or subtraction of matrices\n");
 if(n==e)
 {
 printf("enter 2 for multiplication of matrices\n");
 }
 printf("enter 3 for transpose of first matrices\n");
 }
 else if(m!=n&&n==e)
 {
 printf("enter 2 for multiplication of matruces\n");
 printf("enter 3 for transpose of first matrices\n");
 }
else
{
printf("enter 3 for transpose of first matrices\n");
}
scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
  sum[i][j]=a[i][j]+b[i][j];
  sub[i][j]+a[i][j]-b[i][j];
  }
}
printf("enter 1 for addition or 2 for subtraction:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("the resultant matrices is :\n");
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
printf("%3d",sum[i][j]);
    }
printf("\n");
   }
   break;
     case 2:
printf("the tresultant matrices is:\n");
   for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
     {
printf("%3d",sub[i][j]);
     }
printf("\n");
    }
}
 break;
  case 2:
printf("the resultant matrices is:\n");
int k;
	for(i=0;i<m;i++)
	{
	for(j=0;j<f;j++)
	{
	sum[i][j]=0;
	for(k=0;k<m;k++)
	{
	sum[i][j]=a[i][j]*b[i][j];
	}
printf("%d\t",sum[i][j]);
	}
printf("\n");
	}
break;
case 3:
   for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
     {
tr[j][i]=a[i][j];
     }
    }
printf("the resultant matrices is:\n");
      for(i=0;i<n;i++)
      {
       for(j=0;j<m;j++)
      {
printf("%3d",tr[i][j]);
      }
printf("\n");
      }
break;
}
}
while(ch>0);
}


