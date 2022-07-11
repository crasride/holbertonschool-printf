C - printf
### Introduction

For this project we made our own version of the function printf.
![68747470733a2f2f692e696d6775722e636f6d2f536a71495573372e706e67](https://user-images.githubusercontent.com/105505927/178279750-67811154-48ec-4467-9dc4-e89813768989.png)

### String
    Input:  _printf("String:[%s]\n", "I am a string !");
    Output: String:[I am a string !]
### Character
    Input:  _printf("Character:[%c]\n", 'H');
    Output: Character:[H]
### Percent
    Input: _printf("Percent:[%%]\n");
    Output: Percent:[%]
### Integer
    Input: _printf("Negative:[%d]\n", -762534);
    Output: Negative:[-762534]
    
### Synopsis
> This repository holds all the code necessary for our custom ```_printf```
> function to run. Our mini-version currently handles conversion specifiers:
> ```c```, ```s```, ```%```, ```d```, ```i```, ```b```, ```o``` and does not yet
> support field width, precision, flag characters, or length modifiers. Unique to our _printf is our ```r```
> reverse conversion and the ```R``` rot13 conversion. In essence, you can
> print any character, string, integer, or decimal number, reverse your strings, 
> transform any number to binary and octal bases, and encrypt your string with rot13 encryption. 


### Files description
 printf.c: - contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives.
    See man 3 printf for more detail. printf will return the number of characters printed (excluding the null byte used to end output to strings)
    _putchar.c: - contains the function _putchar, which writes a character to stdout.
    main.h: - contains all function prototypes used for _printf.
    man_3_printf: - manual page for the custom _printf function.
    printf_functions.c: - contains the functions _print_c, _print_p, and _print_ which handle the conversion specifiers
    printf_func_integer.c - contains the functions _print_i , which handle the conversion specifiers i
    printf_func_decimal.c - contains the functions _print_d , which handle the conversion specifiers d


### Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: Betty style

### How To Install & Compile
```
$git clone https://github.com/crasride/holbertonschool-printf.git
$cd printf
```
Sample main program inside print.c:

int main(void)
{
	_printf("%s "Hello World");
	return (0);
}
====================================
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
$ ./print
Hello World
$


### Authors
William Granger & José Fernandez-Armas
