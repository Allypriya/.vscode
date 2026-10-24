#include <stdio.h>
int main()
{
    char ch;
    printf (" enter a char :");
    scanf ("%c", &ch);
    if ( ch == 'a' || ch == 'A')
    {
        printf (" %c is a vowel \n", ch);
    }
    else 
    {
        printf (" %c is not a vowel \n", ch);
    }
    return 0;
}