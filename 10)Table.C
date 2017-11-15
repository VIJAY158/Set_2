#include<stdio.h>
int main()
{
int n,i,sum;
printf("Enter the no:\n");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
sum=n*i;
printf("%d * %d = %d\n",n,i,sum);
}
return 0;
}
