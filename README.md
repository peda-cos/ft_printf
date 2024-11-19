# ft_printf

This repository contains a custom implementation of the `printf` function in C. The `ft_printf` function can format and print strings, numbers, pointers, and other data types to the standard output or to a specified file descriptor.

#### Norminette
![norminette](https://github.com/peda-cos/get_next_line/actions/workflows/main.yml/badge.svg)

## Features

- Support for the following format specifiers:
  - `%c` : Character
  - `%s` : String
  - `%p` : Pointer
  - `%d` or `%i` : Decimal integer
  - `%u` : Unsigned decimal integer
  - `%x` : Hexadecimal (lowercase)
  - `%X` : Hexadecimal (uppercase)
  - `%%` : Literal percent sign

## Project Structure

- `src/`: Directory containing the C source files.
  - `ft_printf.c`: Main implementation of the `ft_printf` function.
  - `ft_putchar_fd.c`: Function to write a character to a file descriptor.
  - Other auxiliary functions for printing strings, numbers, and pointers.
- `includes/`: Directory containing the header files.
  - `ft_printf.h`: Function declarations and necessary includes.
- `Makefile`: File to automate the build process.

## Usage

### Compilation

To compile the library, run the following command:

```sh
make
```

This command will generate the libftprintf.a file.


### Example Usage

Here's an example of how to use the ft_printf function in your own code:

```c
#include "includes/ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Pointer: %p\n", (void *)main);
    return (0);
}
```


### Cleaning Up

To clean up the object files generated during compilation, use:
```sh
make clean
```

To clean up both the object files and the compiled library, use:
```sh
make fclean
```
