#include "main.h"

/**
 * _integer - print int
 * @l: list of arguments
 * Return: no. of printerd char
 */

int _integer(va_list l)
{
	int i;

	i = _number(l);
	return (i);
}

/**
 * _number - print num
 * @args: argument list
 * Return: no of argu
 */
int _number(va_list args)
{
	int n;
	int d;
	int i;
	int num;

	n = va_arg(args, int);
	d = 1;
	i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	while (num / d > 9)
	{
		d *= 10;
	}
	while (d != 0)
	{
		i += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (i);
}
