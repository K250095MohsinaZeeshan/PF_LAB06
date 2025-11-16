#include <stdio.h>
int main() {
    int number, reverseNumber = 0, digit;
    printf("TICKET NUMBER REVERSAL\n");
    printf("______________________\n");
    printf("\nEnter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }

    printf("\nReversed number = %d\n", reverseNumber);
    return 0;
}

