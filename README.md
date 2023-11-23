
# C - PRINTF (Holberton School) 

This project is a custom implementation of the printf function in C. It can print various data types, such as characters, strings, integers, decimals, octals, hexadecimals, and pointers.




## Installation

To use this function, you need to clone this repository and compile the source files with gcc. For example:

```bash
  git clone https://github.com/Ferlandoo/holbertonschool-printf.git
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.
## Usage
To use the function, you need to include the header file “main.h” in your source code and call the function with the following prototype:

```c
int _printf(const char *format, ...);
```
The function returns the number of characters printed, or -1 if an error occurs.

The format string can contain plain text and format specifiers, which start with the % character. The format specifiers are replaced by the corresponding arguments passed to the function. For example:

```c
_printf("Hello, %s!\n", "world"); /* prints "Hello, world!" */
_printf("%d + %d = %d\n", 1, 2, 3); /* prints "1 + 2 = 3" */
```
The following table shows the supported format specifiers and their meanings:

| Specifier  | Output |
| ------------- | ------------- |
| c  | 	Single character  |
| s  | String of characters  |
| d or i  | Signed decimal integer  |

## Example
Here are some examples of how to use the function:
```c
#include "main.h"

int main(void)
{
    char c = 'A';
    char *s = "Hello";
    int i = 42;
    double d = 3.14;

    _printf("This is a char: %c\n", c); /* prints "This is a char: A" */
    _printf("This is a string: %s\n", s); /* prints "This is a string: Hello" */
    _printf("This is an integer: %d\n", i); /* prints "This is an integer: 42" */
    _printf("This is a decimal: %.2f\n", d); /* prints "This is a decimal: 3.14" */
    return (0);
}

```
## Authors

- [@Ferlandoo](https://www.github.com/Ferlandoo)

- [@blerim2](https://github.com/blerim2)
