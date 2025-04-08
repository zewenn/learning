
#include <stdio.h>
#include <stdint.h>

int main()
{
    for (uint8_t i = 0; i < 20; i++)
    {
        if (i == 5)
            break;
            
        printf("before 5: %d\n", i);
    }

    return 0;
}