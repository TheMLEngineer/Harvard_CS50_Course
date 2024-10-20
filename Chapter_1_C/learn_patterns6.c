#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int row ;
    do
    {
        row  = get_int("Height : ");
    }
    while (row<1 || row>8);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0;j<=i;j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k <= row - (i+1) ; k++ )
        {
            printf("*",k);
        }
        printf("\n");
    }
}