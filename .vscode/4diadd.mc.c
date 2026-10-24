#include <stdio.h>
int main()
{
    int a = 1234;
    int b = a % 10;
    a = a/10;
    int c = a % 10;
    int d = a % 10;
    a = a/10;
    int e = a % 10;
    printf (" addition : %d \n", c+e);
    printf (" multiply : %d \n", c*e);
    return 0;
}
