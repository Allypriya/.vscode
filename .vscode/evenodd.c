#include <stdio.h>
int main()
{
    int n;
    printf (" enter a number :");
    scanf ("%d", &n);
    if ( n % 2 == 0)
    {
        printf (" %d is even no \n", n);
    }
    else
    {
        printf (" %d is odd no \n", n);
    }
    return 0;
}