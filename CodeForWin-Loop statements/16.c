#include <stdio.h>

int main()
{
    // Write a C program to enter a number and print its reverse.
    
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;          
        reverse = reverse * 10 + digit;  
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
