#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to input month number and print number of days in that month.
    int month;

    printf("Enter Number of Month: ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Number of days in this month is 31.");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Number of days in this month is 30.");
    }
    else if (month == 2)
    {
        printf("Number of days in this month could be 28 or 29.");
    }
    else
    {
        printf("Please Enter A Valid Month.");
    }
    return 0;
}
