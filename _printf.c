#include <stdio.h>
/**
 * _printf - print formated text
 * format: the formater characterr
 * Return: no.of prited char
 */

int _printf(const char *format, ...)
{
	int i;
	
	convert_special_char ch_list[] = { 
		{"c", _char},
		{"i", _integer},
		{"d", _integer},
		{"s", _string},
		{"u", _unassigned},
		{"b", _binary},
		{"x", _hexdec},
		{"o", _octal},
		{"p", _pointer},
		{"r", _reverse},
		{"R", _rot13},
		{"%", _persent},
		{NULL, NULL},
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		va_start(arg_list, format);
		i = format_reciver(format, ch_list, arg_list);
		va_end(arg_list);
		return (i);
}
