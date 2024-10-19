#include "cs50.h"
#include<stdio.h>

/*

Floating point imprecision

PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C> .\calculator6.exe
X : 1
Y : 3
0.33333334326744079590
PS C:\Users\KARTHIKEYAN MUTHU\Documents\Harvard CS50\Harvard_CS50_Course\Chapter_1_C>

*/

int main(void)
{
    int x = get_int("X : ");
    int y = get_int("Y : ");

    float z = (float) x / (float) y;

    printf("%.20f\n",z);

}