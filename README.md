# ft_printf

A custom implementation of the C standard library's `printf` function. This project recreates the variadic printf function, providing formatted output capabilities with support for multiple conversion specifiers.

## 📋 Description

`ft_printf` is a custom implementation of the printf function from the C standard library. It handles variable arguments and supports multiple format specifiers, making it a versatile tool for formatted output in C programs. The project follows the 42 School coding standards and demonstrates proficiency in variadic functions, string manipulation, and memory management.

## 🛠️ Technology Stack

- **Language**: C
- **Compiler**: Clang with strict flags (`-Wall -Wextra -Werror`)
- **Build System**: Makefile
- **Standard Library**: Limited to `<stdarg.h>` for variadic functions
- **Output**: Static library (`libftprintf.a`)

## 🏗️ Project Architecture

The project follows a modular architecture with separate functions for each data type conversion:

```
ft_printf/
├── includes/
│   └── ft_printf.h          # Header file with function prototypes
├── src/
│   ├── ft_printf.c          # Main printf implementation
│   ├── ft_putchar_fd.c      # Character output
│   ├── ft_putstr_fd.c       # String output
│   ├── ft_putnbr_fd.c       # Signed integer output
│   ├── ft_putunbr_fd.c      # Unsigned integer output
│   ├── ft_puthex_fd.c       # Hexadecimal output
│   └── ft_putptr_fd.c       # Pointer address output
├── Makefile                 # Build configuration
└── LICENSE                  # MIT License
```

### Core Components

- **ft_printf.c**: Main function that parses format strings and dispatches to appropriate handlers
- **Output Functions**: Modular functions for different data types
- **File Descriptor Support**: All output functions support custom file descriptors

## 🚀 Getting Started

### Prerequisites

- GCC or Clang compiler
- Make build system
- UNIX-like operating system (Linux, macOS)

### Installation

1. Clone the repository:
```bash
git clone https://github.com/peda-cos/ft_printf.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

This will generate `libftprintf.a` in the project root.

### Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```

2. Compile your program with the library:
```bash
cc -Wall -Wextra -Werror your_program.c -L. -lftprintf -Iincludes -o your_program
```

3. Example usage:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

## ✨ Key Features

### Supported Format Specifiers

| Specifier | Description                   | Example                                 |
| --------- | ----------------------------- | --------------------------------------- |
| `%c`      | Single character              | `ft_printf("%c", 'A')` → A              |
| `%s`      | String                        | `ft_printf("%s", "Hello")` → Hello      |
| `%p`      | Pointer address (hexadecimal) | `ft_printf("%p", ptr)` → 0x7ffd5e8a3b4c |
| `%d`      | Signed decimal integer        | `ft_printf("%d", -42)` → -42            |
| `%i`      | Signed decimal integer        | `ft_printf("%i", 42)` → 42              |
| `%u`      | Unsigned decimal integer      | `ft_printf("%u", 42)` → 42              |
| `%x`      | Hexadecimal (lowercase)       | `ft_printf("%x", 255)` → ff             |
| `%X`      | Hexadecimal (uppercase)       | `ft_printf("%X", 255)` → FF             |
| `%%`      | Percent sign                  | `ft_printf("%%")` → %                   |

### Features

- ✅ Variadic function implementation using `stdarg.h`
- ✅ Return value: total number of characters printed
- ✅ Modular design with separate conversion functions
- ✅ Efficient recursive algorithms for number conversions
- ✅ NULL pointer handling for strings and pointers
- ✅ Strict compilation with `-Wall -Wextra -Werror`

## 📁 Project Structure

```
ft_printf/
│
├── includes/              # Header files
│   └── ft_printf.h       # Main header with prototypes
│
├── src/                  # Source files
│   ├── ft_printf.c       # Main implementation
│   ├── ft_putchar_fd.c   # Character output
│   ├── ft_putstr_fd.c    # String output
│   ├── ft_putnbr_fd.c    # Integer output
│   ├── ft_putunbr_fd.c   # Unsigned integer output
│   ├── ft_puthex_fd.c    # Hexadecimal output
│   └── ft_putptr_fd.c    # Pointer output
│
├── Makefile              # Build automation
├── LICENSE               # MIT License
└── README.md             # This file
```

## 🔧 Development Workflow

### Building the Project

```bash
make          # Compile the library
make clean    # Remove object files
make fclean   # Remove object files and library
make re       # Rebuild from scratch
```

### Makefile Rules

- **all**: Default rule, builds the static library
- **clean**: Removes all object files (*.o)
- **fclean**: Removes object files and the library
- **re**: Performs fclean followed by all
- **%.o**: Pattern rule for compiling .c files to .o files

## 📝 Coding Standards

This project adheres to the **42 School Norm**, which includes:

### Naming Conventions
- Functions prefixed with `ft_`
- Clear, descriptive variable names
- Snake_case for functions and variables

### Code Style
- Maximum 25 lines per function
- Maximum 80 characters per line
- Maximum 5 functions per file (with exceptions for helper functions)
- Proper indentation with tabs
- Header comments following 42 format

### Best Practices
- No global variables
- Memory safety and leak prevention
- Proper error handling
- File descriptor support for output functions
- Modular, reusable code design

## 🧪 Testing

### Manual Testing

Create a test file to verify functionality:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret;
    int std_ret;

    // Test character
    ft_ret = ft_printf("ft_printf: %c\n", 'A');
    std_ret = printf("printf:    %c\n", 'A');
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    // Test string
    ft_ret = ft_printf("ft_printf: %s\n", "Hello World");
    std_ret = printf("printf:    %s\n", "Hello World");
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    // Test integers
    ft_ret = ft_printf("ft_printf: %d %i\n", -42, 42);
    std_ret = printf("printf:    %d %i\n", -42, 42);
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    // Test unsigned
    ft_ret = ft_printf("ft_printf: %u\n", 4294967295u);
    std_ret = printf("printf:    %u\n", 4294967295u);
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    // Test hexadecimal
    ft_ret = ft_printf("ft_printf: %x %X\n", 255, 255);
    std_ret = printf("printf:    %x %X\n", 255, 255);
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    // Test pointer
    void *ptr = &main;
    ft_ret = ft_printf("ft_printf: %p\n", ptr);
    std_ret = printf("printf:    %p\n", ptr);
    printf("Return values: %d vs %d\n\n", ft_ret, std_ret);

    return (0);
}
```

Compile and run:
```bash
cc -Wall -Wextra -Werror test.c -L. -lftprintf -Iincludes -o test
./test
```

### Testing Approach

- **Comparison Testing**: Compare output with standard `printf`
- **Return Value Verification**: Ensure correct character count is returned
- **Edge Cases**: Test NULL pointers, zero values, maximum values
- **Format String Parsing**: Test various format combinations
- **Memory Safety**: Verify no memory leaks or buffer overflows

## 🤝 Contributing

Contributions are welcome! Please follow these guidelines:

### Code Style
- Follow the 42 School Norm
- Maintain consistent formatting
- Use the project's function naming convention (`ft_` prefix)
- Include proper header comments

### Submission Process
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

### Code Review Criteria
- Code compiles without warnings with `-Wall -Wextra -Werror`
- Functions respect the 25-line limit
- No memory leaks (verify with valgrind)
- Proper error handling
- Clear, maintainable code

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2025 Pedro Monteiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction...
```

## 👤 Author

**Pedro Monteiro** (peda-cos)
- GitHub: [@peda-cos](https://github.com/peda-cos)
- 42 Intra: peda-cos

## 🙏 Acknowledgments

- 42 School for the project specifications
- The C standard library documentation
- Fellow 42 students for peer reviews and discussions

---

**Note**: This project is part of the 42 School curriculum and is intended for educational purposes.
