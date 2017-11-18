#include<stdio.h>
void main()
{
int n,i,sum=1;
printf("Enter the no:\n");
scanf("%d",&n);
for(i=n;i>1;i--)
{
sum=sum*i;
}
printf("The factorial of %d = %d",n,sum);
}
