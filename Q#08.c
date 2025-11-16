#include <stdio.h>

 double factorial(int n) 
{
    double f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() 
{
	printf("CATALAN SERIES\n");
	printf("______________\n");
    int n, i;
    printf("\nEnter n(for 'n' catalan numbers): ");
    scanf("%d", &n);

    printf("\nStarting %d Catalan numbers:\n", n);

    for (i = 0; i < n; i++) 
	{
        double c = factorial(2*i) / (factorial(i+1) * factorial(i));
        printf("%.01f\n", c);
    }

    return 0;
}

