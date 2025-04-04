# Conditionals

In the last lesson we learned about logical expressions like `==` (equality), `!=` (not equal), and other relational operations (`<`, `>`, `>=`, `<=`). Today we are going to use these operators to control the flow of our application.

## Why?

Why do we need to use logical operators? Because we do not know the user's input. We do not know ahead of time which button will be pressed, which character will be given as input, so we need to prepare.

## How?

We will use `if` statements to differentiate between possibilities.

Example:

```c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 0)
    {
        printf("arg 0: %s", argv[0]);
    }

    if (argc > 1)
    {
        printf("arg 1: %s", argv[1]);
    }
}

```

To understand this example we will need to understand what `argc` and `argv` mean. `argc` is an integer which stores how many arguments have been given to the program. And now the tricky part: `argv`, the argument vector. You do not need to understand pointers just yet, all you need to know is: `argv` is an array of strings. You can index it and you will get a string back. If you index the string you will get a character back.

So, we are printing the first and the second arguments. But what is there is no first or second argument? We are indexing out of memory. That will result in a segmentation fault, or just a simple crash. This is why we need to check the number of arguments; if we did not give the program 2 arguments, we cannot access them in the program.

## So let's handle user input!

Example:

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Not enough arguments!");
        return 1;
    }

    if (strcmp(argv[1], "password") == 0)
    {
        printf("Correct password!");
    }
    else
    {
        printf("Incorrect password!");
    }
}
```

Here we have two new building blocks: `else` and `strcmp`.

1. `else` statements can be chained after `if` statements. An `else` statement is run when the `if` statement's condition is false.

   ```txt
   if (condition) { <--code block : if true--> } else { <--code block : if false--> }

   ```

2. `strcmp` or "String Compare" is a standard library function (found in `string.h`). It compares two strings and **returns `0`** if they are equal.
   ```c
   strcmp("asd", "asd") == 0 // true
   strcmp("asd", "wasd") == 0 // false
   ```

## Alright, but what if there's more?

Example:

```c
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
```

Now we have the holy trinity, `if`, `else`, and `else if`. `else if` is used to specify a condition which is only checked after the previous one failed. Meaning the program will check for `"apple"` first, then for `"peach"`, and if nothing has worked, it just tells the user, it doesn't know anything about that fruit.

## Never Nesting

Using many `else if` and `else` statements if concidered bad by modern standards. They are concidered bad practice, since they reduce readability by a great amount.

```c
// examples/4_never_nest.c
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
        return 0;
    }

    if (strcmp(argv[1], "peach") == 0)
    {
        printf("Damn, I love peaches!");
        return 0;
    }

    printf("I haven't tried %s yet!", argv[1]);
}
```

The tactic used above is called _early returning_, and this is a commond tactic in Never Nested code. We have already used this for error checking before, but we can use it with other value comparisons too.

This is useful, since code readablity has increased. You do not need to keep all of the conditions in mind, you can just focus on the current one.

If you are interested in this topic, I recommend [this video](https://www.youtube.com/watch?v=CFRhGnuXG-4).

## Homework!

If you are ready, you can do your [homework](./homework.md)!
