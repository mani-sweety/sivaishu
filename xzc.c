#include<stdio.h>
int main()
{
int n,i,x=0,y=1,z;
printf("enter the number");
scanf("%d",&n);
printf("0  1");
for(i=2;i<n;i++)
{
z=x+y;
x=y;
y=z;
printf("\t%d",z);
}
return 0;
}
