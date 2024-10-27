#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line arg\n");
        return 1;
    }
    printf("Hello %s\n", argv[1]);
}
