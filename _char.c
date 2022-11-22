#include "main.h"

/**
 * _char - print character
 * @l: arguments
 * Return: no. of char
 */

int _char(va_list l)
{
	_putchar(va_arg(list, int));
	return (1);
}
