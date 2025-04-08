# Loops in C

The C language has 2 (and a half) types of loops. These are the `while`, (`do while`,) and `for loops.`

## The `while` loop

The `while` loop executes a given block of code **while** the determining condition is true.

### [Example](./example/1_while.c):

```c
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
```

Here we **iterate** through the numbers from 0 to 10. When 10 is reached, the `while` loop will stop executing, giving us the following output:

```txt
i: 0
i: 1
i: 2
i: 3
i: 4
i: 5
i: 6
i: 7
i: 8
i: 9
```

## `for` loops

What we have done in the previous example is a _"hand-made"_ `for` loop. `for` loops automatically track a counter variable, and check a condition on each run.

### [Example](./example/2_for.c):

```c
#include <stdio.h>
#include <stdint.h>

int main()
{
    for (uint8_t i = 0; i < 10; i++)
    {
        printf("i: %d\n", i);
    }

    return 0;
}
```

Here we have simplified the previous `while` based loop by using a `for` loop. Here we also create the variable `i`, set its value, and iterate until we reach the number 10. **BUT** this is a **better** approach. As you may have noticed, this only took one line, and the variable `i` is not accessable outside the loop.

### The `do-while` loop

The `do-while` loop is useful when you need to do something one or possibly more times. Like handling user input: you will definitely need to ask for input, but if the input is incorrect you may need to ask again.

### [Example](./example/3_do_while.c):

```c
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
```

There are two new components to our code:

1. `getchar()`: Reads one character pressed on the keyboard (followed by enter)
2. `do-while`: The code will only ask for a new character if the first input wasn't correct.

## The `break` and `continue` instructions

There are two ways to "jump out" of a loop:

1. `continue`: this will resume the loop, skipping to the next iteration:
   <br> [Example](./example/4_continue.c):

   ```c
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
   ```

2. `break`: this will instantly stop the loop.
   <br> Example:

   ```c
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
   ```
