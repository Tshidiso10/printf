#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints integer
 * @print: argument pointer
 *
 * Return: number chars printed
 */
int print_int(va_list print)
{
	long l;

	if (format[j])
		l = (int)va_arg(print, int);
	return (print_number(convert(l, 10, 0));
}
