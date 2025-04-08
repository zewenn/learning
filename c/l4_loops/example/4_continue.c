#include <stdio.h>
#include <stdint.h>

int main()
{
    for (uint8_t i = 0; i < 20; i++)
    {
        if (i % 2 != 0)
            continue;

        printf("even: %d\n", i);
    }

    return 0;
}