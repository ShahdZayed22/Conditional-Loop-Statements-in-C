#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to check whether a number is divisible by 5 and 11 or not.
    int num;

    printf("Enter Number:");
    scanf("%d", &num);
    printf("\n");

    if ((num % 5 == 0) && (num % 11 != 0))
    {
        printf("%d is only divisible by 5\n", num);
    }
    else if ((num % 11 == 0) && (num % 5 != 0))
    {
        printf("%d is only divisible by 11\n", num);
    }
    else if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf("%d is divisible by 5 & 11", num);
    }
    else
    {
        printf("%d is not divisible by either 5 or 11\n", num);
    }
    return 0;
}
