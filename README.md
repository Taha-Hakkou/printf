# printf

[//]: <> (ALX Project)

## Description

_printf replicates the C standard library printf() function.

---

## Prototype
```int _printf(const char *format, ...);```

---

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

---

## Examples

* ```_printf("Hello, main\n")``` *prints "Hello, Main", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---

## Options

* Produces output according to the following formats:
  - c : converts input into a character
  - s : converts input into a string

* Handles the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer
  - b : the unsigned int argument is converted to binary
  - u : converts the input into an unsigned integer
  - o : converts the input into an octal number
  - x : converts the input into a hexadecimal number
  - X : converts the input into a hexadecimal number with capital letters
  - p : int input is converted to a pointer address


* Uses a local buffer of 1024 chars in order

* Handles the following custom conversion specifiers:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
  - r : prints the reversed string
  - R : prints the Rot13'ed string

* Handle the following flag characters for non-custom conversion specifiers:
  - \+ : adds a \+ in front of signed positive numbers and a \- in front of signed negative numbers
  - space : same as \+, but adds a space (is overwritten by \+)
  - \# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions
  - \0 : *******
  - \- : *******

* Handles the following length modifiers for non-custom conversion specifiers:
  - l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
  - h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

* Handles the field width for non-custom conversion specifiers.

* Handles the precision for non-custom conversion specifiers.
 
* Uses a local buffer of 1024 chars in order to call write as little as possible.

---

### Authors
* **Taha Hakkou** - [taha.hakkou42@gmail.com](https://github.com/Taha-Hakkou)
