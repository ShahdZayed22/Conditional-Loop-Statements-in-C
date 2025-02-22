#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to check whether a character is alphabet or not.
    char ch;

    printf("Enter Character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The Character IS an Alphabet.");
    }
    else
    {
        printf("The Character IS NOT an Alphabet.");
    }

    return 0;
}
