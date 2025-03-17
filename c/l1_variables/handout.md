# Variable Types

The C language has primitive and complex data types, today we will talk about the former.
Primitive data types can be sorted into 4+1 main categories:

1. Booleans
1. Integers
1. Floating Point Numbers
1. Characters
1. Arrays (semi-complex)

## Booleans

Booleans (named after George Bool) are the simplest datatype of them all. They either hold a `true` or a `false` value. This is represented in **one bit** as either a `1` (`true`) or `0` (`false`).

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
