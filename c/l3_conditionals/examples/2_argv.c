#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Not enough arguments!");
        return 1;
    }

    if (strcmp(argv[1], "password") == 0)
    {
        printf("Correct password!");
    }
    else
    {
        printf("Incorrect password!");
    }

    return 0;
}