# Operators

Today we will learn about two types of operators:

- Arithmetic
- Logical

## Arithmetic Operators

Arithmetic operators are useful when doing calculations. These also have two subtypes:

- Binary(#binary-operators)
- Unary

### Binary Operators

The C language has 5 binary operators to help you perform basic arithmetic operations. These are as follows:

- Addition:

  - Syntax: `<number> + <number>`
  - Function: adds two numbers together

- Subtraction:

  - Syntax: `<number> - <number>`
  - Function: subtracts one number from another

- Multiplication:

  - Syntax: `<number> * <number>`
  - Function: multiplies one number by another

- Division:

  - Syntax: `<number> / <number>`
  - Function: divides one number by another

- Modulus:

  - Syntax: `<number> % <number>`
  - Function: returns the remainder of int divisions
  - Example: `5 % 2` will equal `1`, since `5 / 2` is `2` and `1` is the remainder.

### Unary Operators

Unary operators perform operations on a single operand. Common unary operators in C include:

- Increment (++):

  - Syntax:
    - Prefix: `++<variable>`
    - Postfix: `<variable>++`
  - Function: Increases the variable’s value by 1. Prefix increments before using the value; postfix increments after.
  - Example:
    - `int x = 5; printf("%d", ++x);` prints `6`.
    - `int x = 5; printf("%d", x++);` prints `5` (then `x` becomes `6`).

- Decrement (--):

  - Syntax:
    - Prefix: `--<variable>`
    - Postfix: `<variable>--`
  - Function: Decreases the variable’s value by 1. Prefix decrements before using the value; postfix decrements after.
  - Example:
    - `int x = 5; printf("%d", --x);` prints `4`.
    - `int x = 5; printf("%d", x--);` prints `5` (then `x` becomes `4`).

- Unary Minus (-):

  - Syntax: `-<number>`
  - Function: Negates the value of the operand.
  - Example: `-5` evaluates to `-5`; `-(3 + 2)` evaluates to `-5`.

- Unary Plus (+):

  - Syntax: `+<number>`
  - Function: Explicitly indicates a positive value (rarely used, as numbers are positive by default).
  - Example: `+5` is equivalent to `5`.

---

## Logical Operators

Logical operators evaluate conditions and combine boolean results. These are often used with relational operators.

### Relational Operators

Relational operators compare two values and return `1` (true) or `0` (false):

- Equal to:

  - Syntax: `<expression> == <expression>`
  - Function: Checks if two values are equal.
  - Example: `5 == 5` returns `1`; `3 == 5` returns `0`.

- Not equal to:

  - Syntax: `<expression> != <expression>`
  - Function: Checks if two values are different.
  - Example: `5 != 3` returns `1`.

- Greater than:

  - Syntax: `<expression> > <expression>`
  - Function: Returns `1` if the left value is larger.
  - Example: `6 > 5` returns `1`.

- Less than:

  - Syntax: `<expression> < <expression>`
  - Function: Returns `1` if the left value is smaller.
  - Example: `4 < 5` returns `1`.

- Greater than or equal to:

  - Syntax: `<expression> >= <expression>`
  - Function: Returns `1` if the left value is equal or larger.
  - Example: `5 >= 5` returns `1`.

- Less than or equal to:

  - Syntax: `<expression> <= <expression>`
  - Function: Returns `1` if the left value is equal or smaller.
  - Example: `5 <= 5` returns `1`.

### Logical Operators

These combine or invert boolean values:

- Logical AND (`&&`):

  - Syntax: `<condition> && <condition>`
  - Function: Returns `1` only if both conditions are true.
  - Example: `(5 > 3) && (2 < 4)` returns `1`.

- Logical OR (`||`):

  - Syntax: `<condition> || <condition>`
  - Function: Returns `1` if at least one condition is true.
  - Example: `(5 == 3) || (2 != 4)` returns `1`.

- Logical NOT (`!`):

  - Syntax: `!<condition>`
  - Function: Inverts the result: `1` becomes `0`, and `0` becomes `1`.
  - Example: `!(0)` returns `1`; `!(5 == 5)` returns `0`.
