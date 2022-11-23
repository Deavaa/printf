#include "main.h"

/**
 * _unassigned - prints unsigned integer
 * @l: argu
 * Return no 
 */

int _unassigned(va_list l)
{
	unsigned int n;

	num =va_arg(l, unsigned int);

	if (n < 1)
	{
		return (-1);
	}
	return (_unsigned_numn));
}

/**
 * _unsigned_num - print unsigned num
 * @n: printeble num
 * Return: no. printed char
 */

int _unsignednum(unsigned int n)
{
	int i, d;
	unsigned int n2;

	d = 1;
	i = 0;

	n2 = n;

	while (n2 / d > 9)
	{
		i += _putchar('0' + n2 / d);
		n2 %= d;
		d /= 10;
	}
	return (i);
}
