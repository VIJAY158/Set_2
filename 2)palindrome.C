#include<stdio.h>
int main()
{
int n,rev=0,temp1,r;
printf("Enter the no:\n");
scanf("%d",&n);
temp1=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(temp1==rev)
printf("Palindrome");
else
printf("Not a Palindrome");
return 0;
}
