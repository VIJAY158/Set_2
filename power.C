#include<stdio.h>
int main()
{
int n,p,i,sum=1;
printf("Enter the no's:");
scanf("%d%d",&n,&p);
for(i=0;i<p;i++)
{
sum=sum*n;
}
printf("The powered walue is %d",sum);
return 0;
}
