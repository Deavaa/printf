#include "main.h"

/**
 * _hex - print hexadeciaml
 * @list: list of arguments
 * Return: no. characters
 */

int _hex(va_list list)
{
	unsigned int n1;
	int i;
	int rem;
	char *hex_rep;
	char *rev;

	n1 = va_arg(list, unsigned int);

	if (n1 == 0)
	{
		return (_putchar('0'));
	}

	i = base_len(n1, 16);
	hex_rep = malloc(sizeof(char) * i + 1);

	if (n1 < 1 || hex_rep == NULL)
	{
		return (-1);
	}

	for (i = 0; n1 > 0; i++)
	{
		rem = n1 % 16;
		if (rem > 9)
		{
			rem =hex_check(rem, 'x');
			hex_rep[i] = rem;
		}
		else
		{
			hex_rep[i] = re, + 48;
			n1 /= 16;
		}
		hex_rep[i] = '\0';
		rev = rev_string(hex_rep);
		if (rev == NULL)
		{
			return (-1);
		}
		write_base(rev);
		free(hex_rep);
		free(rev);
		return (i);
