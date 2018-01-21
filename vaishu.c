#include<stdio.h>
int main()
{
int i,f,l;
printf("enter the first number");
scanf("%d",f);
printf("enter the last number");
scanf("%d",l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf("even: %d",i);
}
return 0;
}
}
