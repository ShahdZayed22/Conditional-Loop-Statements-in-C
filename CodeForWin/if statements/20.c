#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to input basic salary of an employee and calculate its Gross salary.
    float salary, hra, da, g_salary;

    printf("What is your basic salary?");
    scanf("%f", &salary);
    
    if (salary <= 10000)
    {
        hra = salary * 0.20;  
        da = salary * 0.80; 
    }
    else if(salary > 10000 && salary <= 20000)
    {
        hra = salary * 0.25;  
        da = salary * 0.90;
    }
    else if(salary > 20000)
    {
        hra = salary * 0.30;  
        da = salary * 0.95;
    }
    else
    {
        printf("Make sure of your entered salary");
    }
    g_salary = salary + hra + da;
    printf("\nHRA: %.2f", hra);
    printf("\nDA: %.2f", da);
    printf("\nGross Salary: %.2f\n", g_salary);
    return 0;
}