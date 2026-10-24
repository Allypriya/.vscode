#include <stdio.h>

int main()
{
    int a[10][10];
    int r,c,i,j;
    printf (" enter the no of the rows and column \n");
    scanf (" %d %d \n", &r,&c);
    printf (" enter the elements of the array \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf (" %d \n", &a[i][j]);
        }
    }
    printf (" the 2d array is :\n");
    for (i=0; i<r; i++)
    {
        printf ("%d ", a[i][j]);
    }
    printf (" \n ");
    return 0;
}