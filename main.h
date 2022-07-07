#ifndef _C_PRINTF_
#define _C_PRINTF_
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct printf - Printf type with corresponding print function
 * @ref: print type
 * @f: print function
 *
 */

typedef struct printf
{
	char *ref;
	int (*f)(va_list);
} printf_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_p(va_list list);
int print_i(va_list list);
int print_d(va_list list);

#endif  /* _C_PRINTF_  */
