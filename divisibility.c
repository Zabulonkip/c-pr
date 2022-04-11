#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%17==0)
	{
		printf("%d is divisible by 17", num);
	}
	else
	{
		printf("%d is not divisible by 17", num);
	}
	return 0;
}
