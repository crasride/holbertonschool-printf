#include "main.h"
#include <stdlib.h>

/**
* print_c - prints a char
* @c: char to print
* Return: always 1
*/
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
* print_s - prints a string
* @s: string
* Return: number of chars printed
*/
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
* print_p - function
* @p: list of arguments
*
* Description: prints percent symbol
* Return: Will return the amount of characters printed.
*/
int print_p(__attribute__((unused))va_list p)
{
	_putchar('%');
	return (1);
}
