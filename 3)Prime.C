#include<stdio.h>
int main()
{
int n,i,f=0;
printf("Enter the no \n");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
f=1;
}
}
if(f!=1)
printf("Prime number");
else
printf("Not a prime number");
}
