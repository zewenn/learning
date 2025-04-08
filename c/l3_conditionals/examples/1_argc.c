
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 0)
    {
        printf("arg 0: %s\n", argv[0]);
    }

    if (argc > 1)
    {
        printf("arg 1: %s\n", argv[1]);
    }

    return 0;
}