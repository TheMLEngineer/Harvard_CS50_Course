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
        printf("*");
        printf("\n");
    }
    printf("\n");
}