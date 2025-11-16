#include <stdio.h>
int main()
{
	int PIN , sum = 0 , temp;
	printf("ATM PIN AUTHORIZATION\n");
	printf("_____________________\n");
	printf("Enter 4 digit pin for your ATM account:");
	scanf("%d", &PIN);
	
	temp= PIN;
	while(temp>10)
	{
		sum += temp % 10;
		temp/=10;
	}
	if(sum>10)
	{
		printf("\nThe pin you have entered is a strong pin,\nYou can continue with this pin.\n");
	}
	else{
		printf("\nThe pin you have entered is a weak pin,\nMake sure you choose a strong pin.");
	}
return 0;	
}

