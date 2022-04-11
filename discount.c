#include <stdio.h>
int main()
{
	double quantity,price,amount,discount;
	
	printf("Enter quantity:");
	scanf("%if ",&quantity);
	
	printf("Enter price:");
	scanf("%if ",&price);
	
	amount=quantity*price;
	
	if(amount>1000)
	{
		printf("%d discount given.", discount);
	}
	else
	{
		printf("%d no discount given.", discount);
	}
	
	return 0;
}