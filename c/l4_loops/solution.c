#include <stdio.h>
#include <stdint.h>

int main()
{
    char user_input = '\0';
    uint8_t x = 0;

    while (user_input != 'q')
    {
        printf("\x1b[2J\x1b[H");
        for (uint8_t i = 0; i < x; i++)
        {
            printf(" ");
        }
        printf("%d\n> ", x);

        user_input = getchar();

        if (user_input == 'a')
        {
            if (x > 0)
                x--;

            continue;
        }

        if (user_input == 'd')
        {
            if (x < 10)
                x++;

            continue;
        }
    }

    return 0;
}