#include <stdio.h>

int main()
{
	int number,i;
	long factorial = 1;
	
	printf("NUMBER-FACTORIAL CALCULATOR\n");
	printf("___________________________\n");
	
	printf("\nEnter number you want the factorial of: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		factorial*=i;
	}
	
	printf("\nThe factorial of %d is: %d",number,factorial);
	
	return 0;
}

