#include "main.h"

/**
* print_c - Functions
* @c: Char
* Description: Print Char
* Return: 1
*/
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
* print_s - Function
* @s: String
* Description: Prints String
* Return: Number Chars Printed
*/
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (!str)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
* print_p - Function
* @p:  Arguments
* Description: Prints Percent Symbol
* Return: Characters Printed.
*/
int print_p(va_list p)
{
	(void)p;
	_putchar('%');
	return (1);
}
