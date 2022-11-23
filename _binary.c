#include "main.h"

/**
 * _binary - print binary
 * @l: argu
 * Return: lenght of no.
 */

int _binary(va_list ch_list)
{
	unsigned int n;
	int i, j;
	char *str;
	char *rev;

	n = va_arg(ch_list, unsigned int);
	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (num < 1)
	{
		return (-1);
	}

	j = base_len(n, 2);
	str = malloc(sizeof(char) * len +1);
	if (str == NULL)
	{
		return (-1);
	}

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
		{
			str[i] = '0';
		}
		else
		{
			str[i] = '1';
		}
		n = n / 2;
	}
	str[i] = '\0';
	rev = rev_string(str);
	if (rev == NULL)
	{
		return (-1);
	}
	write_base(rev);
	free(str);
	free(rev);
	return (len);
}
