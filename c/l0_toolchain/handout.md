# Toolchain & Hello World

This is the first intro lesson's material, during which we will learn how to set up the `zig toolchain` for `c` compilation. Also we will write the first hello-world program too.

## Toolchain

We will use the `zig toolchain` to build and compile `c` programs.
Installation guide:

- Download the correct executable for you system from [this link](https://github.com/marler8997/zigup/releases/tag/v2025_01_02)
- Add the downloaded executable to a folder located in your `$PATH`
- Run the following command:

  ```bash
  zigup 0.14.0
  ```

- Check if the installation was completed successfully by running the following:
  ```bash
  zig version
  ```
  _the output should be `0.14.0`_

## Hello World

This is the basic simple project all languages use as a demo, this will introduce some key concepts, such as `#include`, methods and method calls.

### Create the program

1. First create a new `c` file:
   - Linux/macOS:
     ```bash
     touch main.c
     ```
   - Windows:
     ```ps1
     New-Item -Path .\main.c -ItemType File
     ```
2. Open it up in your editor, I'll use [VS Code](https://code.visualstudio.com/):

   ```bash
   code main.c
   ```

3. Paste in the following code which we will analyse later:

   ```c
    #include <stdio.h> // This includes the stdio.h file, which contains the printf function

    int main() // Entry point for the program
    {
        printf("Hello World!\n"); // Writing to the terminal
        return 0; // Returning the programs exit code
    }
   ```

4. Run the following program with `zig`:

   - Linux/macOS:

     ```bash
     zig cc main.c -o main && ./main
     ```

   - Windows:

     ```ps1
     zig cc main.c -o main.exe; ./main.exe
     ```

5. The output should be the following:
   ```bash
   Hello World!
   ```

### Let's analyse

Alright, now that we have run our first program, we will go over what we just did.
Let's go line by line:

1. #### What did `#include` do?

   For now we only need to think of `#include` as a way to, well, include an entire other file in our program. This means all contents of the file after the `#include` statement will be copied into the main.c file at compile time.

   ##### Okay, so what is compile time?

   By compile time _(or `comptime`)_ we usually mean the first step of building an executable. Compilation is the process of turning the source code (`c` files) into assembly instructions. When the toolchain enters the compile phase, all the macros will be executed, generating `c` code as a result.
   We'll learn about macros in a later lesson, for now it's enough to think of `#include` as a copy-paste of another file's contents.

2. #### So what is `<stdio.h>`

   `stdio.h` is the header file, we will learn about header files later, for now you only need to know that `stdio.h` is contained in the **C Standard Library**. The **C Standard Library** or **std** provides necessary functions to communicate to the os. In this case we include the `stdio` file which handles IO stuff (IO meaning Input-Output, that's why its named stdIO).

   ##### `<>` vs. `""`

   After an `#include` statement you will find either `<file>` or `"file"` like so:

   - `#include <stdio.h>`
   - `#include "my_file.h"`

   For now you will not need to use the `"my_file.h"` syntax, just the `<stdio.h>` one. We will learn about the differences later, but basically `<>` is used for libraries while `""` is used for local files (local meaning within the project).

3. #### `int main()`

   Okay, so this might be weird at first, since `int` is a variable type (of which we will learn next time) followed by a function name and braces. A function is a _callable unit of software logic_, meaning a function executes code, and can be run multiple times. We will learn about functions later too, you just need to know that main is a function with a return type of `int`. This means `main` will always need to return an `int` value. _(spoiler that's what `return 0;` does)_

   For now you will not need to understand most of this, you just need to know that, when the `return` keyword is used within the `main` function, the program exits. The returned value will be the program's exit code. An exit code is useful to indicate the state of the program at exit, if the code is 0 the program has exited without any issues, if it's any other value there was an error.

4. #### `printf`

   `printf` is a function included in the `stdio.h` library. This is the standard way to print information to the terminal. For now we will only print the text `"Hello World!"`.
   We'll learn about the proper use of `printf` later, for now this is all you need to know.

5. #### `return 0;`

   As I've explained above, this is the program exit, we return code 0 to indicate the program ran successfully.

6. #### The brackets: `{}`

   You may have noticed the brackets around the piece of code containing `printf` and `return`. This is the **function body** of the main function, and code that's within brackets (`{}`) is called a **code block**. So main is a function that executes the code block after the function declaration (meaning `FUNCTION DECLARATION HERE --> int main() {<-- CODE BLOCK HERE -->}`).

So that concludes our lesson for the day, hope you had fun, see you next time!
