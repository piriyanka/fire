#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the year");
scanf("%d",&a);
if(a%4==0)
{
printf("the given year is a leap year");
}
else
{
printf("The given year is a non leap year");
}
getch();
}
