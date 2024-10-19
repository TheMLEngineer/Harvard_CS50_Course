#include <stdio.h>
#include <limits.h>

/*
There you have it—a clear display of integer overflow. 
That value of 2147483647 is the maximum for a 32-bit signed integer. 
When you add one to it, it wraps around to the minimum value, -2147483648, like a clock resetting at midnight.
*/

int main() {
    int max = INT_MAX;
    printf("The maximum value of an integer: %d\n", max);

    int overflow = max + 1;
    printf("The value after integer overflow: %d\n", overflow);

    return 0;
}
