#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;
    // prompt user for positive integer
    do
    {
        n = get_int("Square size : ");
    }
    while (n < 1);
    for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}