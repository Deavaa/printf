#include <stdio.h>
/**
 * _printf - print formated text
 * format: the formater characterr
 * Return: no.of prited char
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"%", _percent},
		{"d", _integer},
		{"i", _integer},
		{"c", _char},
		{"s", _string},
		{"b", _binary},
		{"u", _unsigned_integer},
		{"o", _octal},
		{"x", _hex},
		{"X", _HEX},
		{"S", _String},
		{"p", _pointer},
		{"r", _rev},
		{"R", _rot13},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	printed_chars = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}

