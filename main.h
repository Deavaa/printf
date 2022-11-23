#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#define NULL_STRING "(null)"
#define NUL '\0';

/**
 * convert - define structure
 * @sym: operator
 * @f: function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};

typedef struct convert convert_special_char;

int _printf(const char *format, ...);
int _putchar(char ch);
int format_reciever(const char *format, convert_t list[], va_list arg_list);
int _percent(va_list);
int _integer(va_list);
int _char(va_list);
int _string(va_list);
int _binary(va_list);
int _unsigned(va_list);
int _octal(va_list);
int _hexa(va_list);
int _string(va_list);
int _pointer(va_list);
int _reverse(va_list);
int _rot13(va_list);
int _number(va_list);

#endif
