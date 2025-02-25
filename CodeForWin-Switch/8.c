#include <stdio.h>

int main()
{
    // Write a C program to create Simple Calculator using switch case.
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        break;

    default:
        printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
