
#include<stdio.h>
void main()
{
int a,r,temp=0;
printf("Enter the number:");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
r=r*10;
r=r+temp%10;
temp=temp/10;
}
if(r==a)
printf("The given value is palindrome");
else
printf("The given number is not a palindrome");
}
