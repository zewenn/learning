#include <stdio.h>
#include <stdint.h>

struct type_tag
{
    uint8_t id;
    uint8_t age;
};

int main()
{
    struct type_tag my_struct = {0};

    printf("id: %d\nage: %d\n", my_struct.id, my_struct.age);

    my_struct.id = 1;
    my_struct.age = 10;

    printf("id: %d\nage: %d\n", my_struct.id, my_struct.age);

    return 0;
}