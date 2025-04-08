
#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("Hint: 'Q' to exit!\n");

    char input;
    do
    {
        printf("Press a button: ");
        input = getchar();
        printf("You entered: %c, %s", input, input == 'q' ? "true" : "false");
    } while (input != 'q' && input != 'Q');

    return 0;
}