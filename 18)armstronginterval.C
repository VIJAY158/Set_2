#include<stdio.h>
#include<math.h>
void main()
{
int n1,n2,i,temp1,temp2,temp3,rem,res=0,n=0;
printf("Enter the interval:\n");
scanf("%d%d",&n1,&n2);
printf("The armstrong no's between the intervals are %d to %d\n",n1,n2);
for(i=n1;i<n2;i++)
{
temp1=i;
temp2=i;
temp3=i;
while(temp1!=0)
{
temp1=temp1/10;
n++;
}
while(temp2!=0)
{
rem=temp2%10;
res=res+pow(rem,n);
temp2=temp2/10;
}
if(res==temp3)
{
printf("%d\n",i);
}
n=0;
res=0;
}
}
