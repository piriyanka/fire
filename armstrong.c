#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,t,n1;
printf("Enter the value");
scanf("%d",&n);
n1=n;
while(n>0)
{
t=n%10;
sum=sum+t*t*t;
n=n/10;
}
if(n1==sum)
{
printf("armstrong number");
}
getch();
}
