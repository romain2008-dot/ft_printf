# ft_printf

*This project has been created as part of the 42 curriculum by romgutie.*

## Description

ft_printf is a custom implementation of the standard C `printf()` function.

The goal of this project is to recreate the core behavior of printf from the libc.
This project introduces variadic functions in C.

## Instructions

### Compilation

To compile the library, use the provided Makefile:

```
make
```

This will generate the `libftprintf.a` file at the root of the project.

### Available commands

- `make` or `make all`: Compiles the library
- `make clean`: Removes object files (.o)
- `make fclean`: Removes object files and the library
- `make re`: Recompiles the entire project

### Usage

To use the library in your projects:

1. Include the header in your source files:
```
#include "ft_printf.h"
```

2. Compile your project with the library:
```
cc -Wall -Wextra -Werror main.c -L. -lftprintf
```

### Features

The `ft_printf` function supports the following conversions:
- `%c` : prints a single character
- `%s` : prints a string ((null) if NULL)
- `%p` : prints a pointer address in hexadecimal format
- `%d` / `%i` : prints a signed integer
- `%u` : prints an unsigned integer
- `%x` : prints a number in lowercase hexadecimal
- `%X` : prints a number in uppercase hexadecimal
- `%%` : prints a percent sign
Buffer management from the original printf is not implemented, as required by the subject.

## Algorithm and Data Structure Choices

The `ft_printf` implementation uses a simple linear parsing algorithm.
The format string is scanned character by character.

When a `%` is encountered, the following character is treated as a format specifier and passed to a dispatcher function (`ft_dispatch`), which calls the appropriate printing function.

Each conversion is handled by a dedicated function (characters, strings, numbers, hexadecimal, pointers).

No complex data structures are used. Output is written directly to standard output using `write`, and variadic arguments are handled with `va_list`.

This design was chosen for its simplicity, readability, and full compliancewith the project constraints.

## Resources

- internet
- my brain

### Use of AI

AI was used only to clarify concepts (variadic functions, Makefile structure, project requirements).
All code was written manually.

## Technical Notes

- All files are compiled with the flags `-Wall -Wextra -Werror`
- No global variables are used
- The project strictly follows the 42 Norm
