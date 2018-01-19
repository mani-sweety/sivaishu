#include<stdio.h>
main()
{
int digit,num,temp,rev=0;
scanf("%d",&num);
temp=num;
while(num>=1)
{
digit=temp%10;
rev=rev*10+digit;
temp=temp/10;
}
printf("%d",rev);
if(rev==num)
{
printf("palingdrome");
}
else
{
printf("not a palingdrome");
}
}
