
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

    if (strcmp(argv[1], "apple") == 0)
    {
        printf("I like apples too!");
    }
    else if (strcmp(argv[1], "peach") == 0)
    {
        printf("Damn, I love peaches!");
    }
    else
    {
        printf("I haven't tried %s yet!", argv[1]);
    }
}