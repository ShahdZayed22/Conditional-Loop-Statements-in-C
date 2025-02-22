#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to input angles of a triangle and check whether triangle is valid or not.

    float theta1, theta2, theta3;
    float total;

    printf("Enter 3 angles in degrees: ");
    scanf("%f", &theta1);
    scanf("%f", &theta2);
    scanf("%f", &theta3);

    total = theta1 + theta2 + theta3;

    if (total == 180)
    {
        printf("This Triangle is Valid.");
    }
    else
    {
        printf("This Triangle is not Valid! Please make sure the summation of angles = 180 degrees.");
    }
    return 0;
}
