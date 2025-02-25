#include <stdio.h>

int main()
{
    // Write a C program to find sum of all natural numbers between 1 to n.

    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i; 
    }

    printf("The sum of all natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}