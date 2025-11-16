#include <stdio.h>

int main() {
    int n, i, j, isPrimeNumber;
    printf("PRIME NUMBER CHECKER\n");
    printf("____________________\n");
    printf("\nEnter a number to check whether it is prime or not: ");
    scanf("%d", &n);

    isPrimeNumber = 1;
    if (n <= 1) 
	    isPrimeNumber = 0;
    else 
	{
        for (i = 2; i * i <= n; i++) 
		{
            if (n % i == 0) 
			{
                isPrimeNumber = 0;
                break;
            }
        }
    }
    if (isPrimeNumber) 
	    printf("\n%d is a prime number.\n", n);
    else
	    printf("\n%d is not a prime number.\n", n);

    printf("\nPrime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++) 
	{
        int prime = 1;
        for (j = 2; j * j <= i; j++) 
		{
            if (i % j == 0)
			{
                prime = 0;
                break;
            }
        }
        if (prime) printf("%d ", i);
    }

    return 0;
}

