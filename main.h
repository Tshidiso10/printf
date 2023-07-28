#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*check_spec(const char*))(va_list print);

int print_char(va_list print);
int print_int(va_list print);
int print_string(va_list print);
int print_percent(va_list print);

/*
 * struct functions
 * @t: character to compare
 * @f: function to handle printing
 */
 typedef struct functions
 {
     char *t;
     int (*f)(va_list);
 }func_t;
#endif
