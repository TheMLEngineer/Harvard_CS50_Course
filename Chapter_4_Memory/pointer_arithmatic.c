#include <stdio.h>

int main(void)
{
    char *s = "Hi!";
    printf("%c\n" , *s);
    printf("%c\n",*(s+1));
}