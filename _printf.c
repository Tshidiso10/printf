#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/*
 * _printf - prints a string
 * @format: string to output (char*)
 * @...: variadic number of parameters
 * Return: characters printed
 */

  int _printf(const char *format, ...)
  {
    int j= 0;
    int count = 0;
    int temp = 0;
    va_list print;
    va_start(print, format);
    int (*f)(va_list);

    if(format == NULL)
        return (-1);

    while(format[j])
    {
        if(format[j] != '%')
        {
            temp =  write(1,&format[j],1);
            count = count + temp;
            j++;
            continue;
        }
        if(format[j] == '%')
        {
            f = check_spec(&format[j +1]);

            if(f != NULL)
            {
                temp = f(print);
                count =+ temp;
                j = j + 2;
                continue;
            }
            if(format[j + 1] == '\0')
            {
                break;
            }
            if(format[j + 1] != '\0')
            {
                temp =  write(1,&format[j + 1],1);
                count = count + temp;
                j = j + 2;
                continue;
            }
        }
    }
    va_end(print);
    return (count);
  }
