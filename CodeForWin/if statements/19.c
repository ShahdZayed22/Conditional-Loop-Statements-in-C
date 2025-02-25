#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to input marks of five subjects. Calculate percentage and grade.

    float phy, chem, bio, math, comp;
    float total, percentage;

    printf("Physics Grade: ");
    scanf("%f", &phy);
    printf("Chemistry Grade: ");
    scanf("%f", &chem);
    printf("Biology Grade: ");
    scanf("%f", &bio);
    printf("Mathematics Grade: ");
    scanf("%f", &math);
    printf("Computer Grade: ");
    scanf("%f", &comp);

    total = phy + chem + bio + math + comp;
    percentage = (total / 500) * 100;
    if (percentage >= 90)
    {
        printf("Percentage: %.2f%% \t Grade: A", percentage);
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Percentage: %.2f%% \t Grade: B", percentage);
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Percentage: %.2f%% \t Grade: C", percentage);
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Percentage: %.2f%% \t Grade: D", percentage);
    }
    else if (percentage >= 40 && percentage < 60)
    {
        printf("Percentage: %.2f%% \t Grade: E", percentage);
    }
    else if (percentage < 40)
    {
        printf("Percentage: %.2f%% \t Grade: F", percentage);
    }
    else
    {
        printf("Please Enter Valid Grades 0 : 100");
    }
    return 0;
}