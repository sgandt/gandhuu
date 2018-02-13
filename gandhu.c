#include<stdio.h>
int main()
{
int n,l,b,i,count;
printf("enter the two limits");
scanf("%d%d",&l,&b);
for(i=l;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
}
