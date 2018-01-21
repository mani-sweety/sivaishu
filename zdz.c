
#include<stdio.h>
int main()
{
int n,r,reverse=0,h;
scanf("%d",&n);
n=h;
while(h!=0)
{
r=h%10;
reverse=reverse*10+r;
h=h/10;
}
if(reverse==n);
{
printf("its is a palindrome %d",n);
}
else
{
printf("it is not a palindrome %d",n);
}
return 0;
}
