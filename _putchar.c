#include "main.h"

/**
 * _putcar - puts to standard output
 * @ch: charcter
 * Return: 1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

/**
 * _puts - print a string
 * @str: string pointer
 * Return: no. of char
 */

int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
