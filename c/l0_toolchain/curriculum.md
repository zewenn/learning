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

