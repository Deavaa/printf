#include "main.h"

/**
 * format_reviever - recive all param
 * @format: format char
 * @f_list: list fun
 * @arg_list: list argu
 * Return: no. printed char
 */

int format_reciver(const char *format, convert_special_char f_list[], va_list arg_list){
	int i, j, r_val, printed_ch;

	printed_ch = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
					{
						return (-1);
					}
					printed_ch += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_ch = printed_ch + 2;
				}
				else
				{
					return (-1);
				}
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_ch++;
		}
	}
	return (printed_ch);
}
