#include "main.h"

/**
 * _string - print string
 * @l: argument list
 * Return: no characters printed
 */

int _string(va_list l)
{
	int i;
	char *str;

	str =va_arg(list, char *);
	if (str == NULL)
	{
		STR = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
