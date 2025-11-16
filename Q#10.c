#include <stdio.h>

int main() {
    int n, i, j;
    printf("HOLLOW DIAMOND PRINTER\n");
    printf("______________________\n");
    printf("\nEnter size of the hollow diamond: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");

        if (i > 1) 
		{
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
	{
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");

        if (i > 1) 
		{
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

