#include <stdio.h>

int main()
{
    // Write a C program to print all natural numbers in reverse (from n to 1).

    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d \n", n);
        n = n - 1;
    }
    
    return 0;
}