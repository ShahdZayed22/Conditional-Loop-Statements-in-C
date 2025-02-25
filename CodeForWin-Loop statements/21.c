#include <stdio.h>

int main() {
    // Write a C program to find power of a number using for loop.
    
    int base, exponent, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("Result: %d\n", result);
    return 0;
}
