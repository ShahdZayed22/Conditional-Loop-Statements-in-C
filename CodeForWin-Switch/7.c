#include <stdio.h>
#include <math.h>

int main()
{
    // Write a C program to find roots of a quadratic equation using switch case.
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0 ? 1 : (discriminant == 0 ? 0 : -1))
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
        break;

    case 0:
        root1 = -b / (2 * a);
        printf("One real and equal root: %.2f\n", root1);
        break;

    case -1:
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        break;

    default:
        printf("Invalid input\n");
    }

    return 0;
}
