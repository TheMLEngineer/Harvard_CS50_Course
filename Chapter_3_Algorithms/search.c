#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {12,34,54,65,32,34,76,43,32};
    int n = get_int("Number : ");
    for (int i = 0; i < 9 ; i++)
    {
        if (numbers[i] == n)
        {
            printf("FOUND\n");
            return 0;
        }
        printf("NOT Found\n");
        return 1;
    }
}