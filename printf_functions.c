#include "main.h"
/**
 * print_c - returns a character as a string
 * @list: char
 * Return: String version of a char
 */
char *print_c(va_list list)
{
	char *s;
	char c;

	c = va_arg(list, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';

	return (s);
}

/**
* print_f - function prints float
* @f: float
* Return: void
*/
void print_f(va_list f)
{
	_putchar()
}

