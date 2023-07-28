#include "main.h"
#include <stdarg.h>

int (*check_spec(const char *format))(va_list print)
{
    int i;

    func_t array[6] = {
    {"c", print_char},
    {"s", print_string},
    {"%", print_percent},
    {"d", print_int},
    {"i", print_int},
    {NULL, NULL}};

    for(i = 0; array[i].t != NULL; i++)
    {
        if (*(array[i].t) == *format)
        {
            return(array[i].f);
        }
    }
   return NULL;
}
