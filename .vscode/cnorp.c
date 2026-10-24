#include <stdio.h>
int main()
{
    int n = 0;
    if ( n > 0 )
    {
        printf (" %d is a positive no \n", n);
    }
    else if (n < 0)
    {
        printf (" %d is a negative no \n", n);
    }
    else
    {
        printf (" %d is a zero or not defined no \n", n);        
    }
}