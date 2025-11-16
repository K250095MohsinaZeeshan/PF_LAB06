#include <stdio.h>

int main() {
    int n, originalNumber, reversedNumber = 0, remainder;
    printf("PALINDROME CHECKER\n");
    printf("__________________\n");
    printf("\nEnter a number: ");
    scanf("%d", &n);

    originalNumber = n;

    while (n > 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    if (originalNumber == reversedNumber)
        printf("\n%d is a palindrome number.\n", originalNumber);
    else
        printf("\n%d is not a palindrome number.\n", originalNumber);

    return 0;
}

