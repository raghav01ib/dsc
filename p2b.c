#include<stdio.h>
void quicksort(int[10],int,int);
int main(){
int x[20],size,i;
printf("ener size of the aray: ");
scanf("%d",&size);
printf("enter %d elements: ",size);
for(i=0;i<size;i++)
scanf("%d",&x[i]);
quicksort(x,0,size-1);
printf("sorted elements: ");
for(i=0;i<size;i++)
printf("%d\t",x[i]);
return 0;
}
void quiccksort(int x[10], int first, int last)
{
int pivot,j,temp,i;
if(first<last){
int pivot=first;
i=first;
j=last;
while(i<j){
while(x[i]<=x[pivot]&&i<last)
i++;
while(x[j]>x[pivot])
j--;
if(i<j){
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
temp=x[pivot];
x[pivot]=x[j];
x[j]=temp;
quicksort(x,first,j-1);
quicksort(x,j+1,last);
}
}
