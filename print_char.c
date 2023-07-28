#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - prints character
 * @print: argument pointer
 *
 * Return: number chars printed
 */
int print_char(va_list print)
{
        char ch;
        int i = 0;
        ch = va_arg(print, int);

    if(ch)
     {
         i = write(1,&ch,1);
         return (i);
     }

	return 0;
}
