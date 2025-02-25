#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
    float side1, side2, side3;

    printf("Enter sides of triangle: ");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("This triangle is equilateral.");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("This triangle is isosceles.");
    }
    else if (side1 != side2 && side2 != side3 && side1 != side3)
    {
        printf("This triangle is scalene");
    }
    else
    {
        printf("Please make sure you entered valid values");
    }
    
    return 0;
}