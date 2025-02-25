#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to print all odd number between 1 to 100.

    for (int i = 1; i <= 100; i++)
    {
        if (i %2 != 0)
        {
            printf("%d", i);
            printf("\n"); 
        }
    }
    return 0;
}