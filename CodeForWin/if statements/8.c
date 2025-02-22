#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to input any alphabet and check whether it is vowel or consonant.

    char ch;

    printf("Enter Alphabet: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' ||
            ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            printf("The Alphabet IS a Vowel.");
        }
        else
        {
            printf("The Alphabet IS NOT a Vowel.");
        }
    }
    else
    {
        printf("The Character IS NOT an Alphabet.");
    }
    return 0;
}
