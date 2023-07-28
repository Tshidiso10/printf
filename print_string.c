#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_string - prints string
 * @print: argument pointer
 *
 * Return: number chars printed
 */
int print_string(va_list print)
{
    int value;
    int string;
    string = va_arg(print, int);
    if(string)
    {
        value =+ string;
        return value;
    }

    return 0;
}
