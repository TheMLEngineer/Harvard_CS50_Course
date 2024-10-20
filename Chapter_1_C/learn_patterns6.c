#include "cs50.h"
#include <stdio.h>


/*

# Print J


PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C> .\learn_patterns6.exe
Height : 4
0
01
012
0123
PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C> 


# Print K


PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C> .\learn_patterns6.exe
Height : 4
0123
012
01
0
PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C> 


*/



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
            //printf("%i",j);
            printf(" ");
        }
        for (int k = 0 ; k <= row - (i+1) ; k++ )
        {
            //printf("%i",k);
            printf("*");
        }
        printf("\n");
    }
}