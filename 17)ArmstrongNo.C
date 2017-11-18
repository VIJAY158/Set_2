#include<stdio.h>
void main()
{
int n,i,j,sum=0,rem;
printf("Enter the no:\n");
scanf("%d",&n);
j=n;
while(n!=0)
{
rem=n%10;
i=rem*rem*rem;
sum=sum+i;
n/=10;
}
if(j==sum)
printf("Armstrong");
else
printf("Not a armstrong");
}
