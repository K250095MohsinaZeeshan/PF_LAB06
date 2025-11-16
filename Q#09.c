#include <stdio.h>

int main() 
{
    long n;
    int even = 0, odd = 0, digit;

    printf("EVEN-ODD NUMBERS COUNTER\n");
    printf("________________________\n");
    
    printf("\nEnter a number series(readings): ");
    scanf("%ld", &n);

    while (n > 0) 
	{
        digit = n % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }

    printf("\nNumber of Even digits in the series : %d\n", even);
    printf("\nNumber of Odd digits in the series: %d\n", odd);

    return 0;
}

