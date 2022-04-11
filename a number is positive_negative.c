#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
if(num>=0)
printf("%d  a positive num\n",num);
else
printf("%d a negative num\n", num);
return 0;
}