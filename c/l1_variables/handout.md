# Variable Types

The C language has primitive and complex data types, today we will talk about the former.
Primitive data types can be sorted into 4+1 main categories:

1. [Booleans](#booleans)
1. [Integers](#integers)
1. [Floating Point Numbers](#floating-point-numbers)
1. [Characters](#characters)
1. void, of which we will learn about later

## Booleans

Booleans (named after George Bool) are the simplest datatype of them all. They either hold a `true` or a `false` value. This is represented in **one bit** as either a `1` (`true`) or `0` (`false`). To use the `bool` type don't forget to import the `stdbool.h` library.

Example usage:

```c
bool my_boolean_value = true;
bool my_other_boolean_value = false;
```

These values will be very useful in the next lesson, so keep in mind.

## Integers

The C language has **4 main integer types**, each with **two sub types**. These are as follows:

- `short` or `short int`, **16 bits in memory**, which can be:

  - `signed`: Capable of containing at least the [−32767, +32767] range.
  - `unsigned`: Contains at least the [0, 65535] range.

- `int`, **16 bits in memory**, (basically the same as `short`) which can be:

  - `signed`: Capable of containing at least the [−32767, +32767] range.
  - `unsigned`: Contains at least the [0, 65535] range.

- `long` or `long int`, **32 bits in memory**, which can be:

  - `signed`: Capable of containing at least the [−2147483647, +2147483647] range.
  - `unsigned`: Capable of containing at least the [0, 4294967295] range.

- `long long` or `long long int`, **64 bits in memory** which can be:

  - `signed`: Capable of containing at least the [−9223372036854775807, +9223372036854775807] range.
  - `unsigned`: Contains at least the [0, 18446744073709551615] range.

### Sign bits

As you can clearly see, there is a huge difference between a `signed` and an `unsigned` int type. When you are using a `signed` type you trade half of the capacity of the `unsigned` type, but you are able to represent negative numbers as well.

A sign bit is the first bit of the integer:

```
[0]000 0000
/|\
 |
 Sign Bit
```

When we are counting with these numbers we do it a bit differently, we say that `[0]000 0000` is equal to -127, and when we increment it we get `[0]000 0001`, which is equal to -126. And when we reach `[0]111 1111` we are at -1. So naturally, when the sign bit flips, we enter into the 0+ range; `[1]000 0000` equals to 0. Meaning the value of an unsigned 8 bit integer's value is always between -127 and 127

### Modern versions

Since the 1999 (C99 Standard) we use the `stdint.h` library to define ints with fixed sizes. I'm going to mention some of them, but you should [read the documentation](https://pubs.opengroup.org/onlinepubs/009696799/basedefs/stdint.h.html).

The C99 Standard introduced such types as:

- uint32_t: unsigned 32 bit integer type
- int8_t: (signed) 8 bit integer type
- int_fast8_t: (signed) 8 bit type, which is faster to operate on.

### Example usage

Builting int types:

```c
int x = 10;
long z = 10000000;
long long y = 100000000000;
```

The types of `stdint.h`:

```c
uint8_t c = 65; // MAX 255
int32_t d = 200000;
```

## Floating Point Numbers

The floating point number type is defined by the IEEE 754-1985 standard. This is a really clever soloution to the hard problem of storing fractions. What a floating point number basically stores is a scientific notation (e.g. 1.6 • 10^5).

```
[0] |0000 0000| (000 0000 0000 0000 0000 0000)
/|\     /|\                  /|\
 |       |                    |
Sign Bit |                    |
         |                    |
      Exponent             Fraction
```

So 32 bit floating point numbers store the Fraction (F) part as a 23 bit wide number, the exponent (E) as an 8 bit number and one additional sign bit.
This is interpreted as F • 2^E, negative if the sign bit is `1`.

For further information look up the [IEEE 754-1985](https://en.wikipedia.org/wiki/IEEE_754-1985).

### Types

The C language has two types of floating point numbers, one for 32 bit, and one for 64 bit versions:

- `float`: 32 bit
- `double`: 64 bit (double the size of a float)

### Example usage

```c
float a = 0.27;
float b = 12.32;
double x = -33.42;
double y = 420.69;
```

## Characters

Characters are used to store a single UTF8 encoded character. They use the `char` keyword and basically represent an unsigned 8 bit integer; since every letter encoded to UTF8 must be represented with a number (or more numbers after each other).

### Example usage

```c
char my_char = 'A';
char my_char_2 = 'B';
```
