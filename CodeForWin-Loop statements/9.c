#include <stdio.h>

int main()
{
    // Write a C program to print multiplication table of any number.
    int num;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d is:\n", num);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
