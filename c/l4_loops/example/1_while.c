#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t i = 0;

    while (i < 10)
    {
        printf("i: %d\n", i);
        i++;
    }

    return 0;
}