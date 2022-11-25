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
 *  * struct convert - defines a structure for symbols and functions
 *   *
 *    * @sym: The operator
 *     * @f: The function associated
 *      */

struct convert
{
		char *sym;
			int (*f)(va_list);
};
typedef struct convert conver_t;


int _printf(const char *format, ...);
int _putchar(char c);
int format_reciever(const char *format, conver_t f_list[], va_list arg_list);
int _percent(va_list);
int _integer(va_list);
int _char(va_list);
int _string(va_list);
int _binary(va_list);
int _unsigned_integer(va_list);
int _octal(va_list list);
int _hex(va_list list);
int _HEX(va_list list);
int _String(va_list val);
int _pointer(va_list val);
int _rev(va_list l);
int _rot13(va_list list);

int _number(va_list args);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int _number(unsigned int n);
int hex_check(int num, char x);
int print_hex_aux(unsigned long int num);
int isNonAlphaNumeric(char c); 
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);
#endif

