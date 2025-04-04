#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Incorrect argument count! (at lest 1 required)");
        return 1;
    }

    if (strcmp(argv[1], "pig") == 0)
    {
        printf("Pigs are pesky animals!");
        return 0;
    }

    // Bonus task
    if (strcmp(argv[1], "cow") == 0)
    {
        printf("Muuuu!");
        return 0;
    }

    // Bonus task
    if (strcmp(argv[1], "pigeon") == 0)
    {
        printf("Government spyware!");
        return 0;
    }

    printf("I don't know anything about %s!", argv[1]);
}
