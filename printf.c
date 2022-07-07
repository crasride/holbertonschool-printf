#include "main.h"
/**
 * _printf - similar as printf function
 * @format: string to print
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
int printed_chars;	printf_t l_list[] =
{
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{"d", print_i},
		{"i", print_i},
		{NULL, NULL}
}
	va_list list;	if (format == NULL)
		return (-1);
}
