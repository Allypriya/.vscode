#include <stdio.h>

int main()
{
    int a[2][3]= {
        {1,2,3},
        {4,5,6}
    };
    int i,j;
    printf (" elements in reversed order :\n");
    for (i=1; i>=0; i--)
    {
        for (j=2; j>=0; j--)
        {
            printf (" %d \n", a[i][j]);
        }    
    }   
    return 0;
}