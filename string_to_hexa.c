#include "holberton.h"

/**
 *print_to_hexa - prints hexadecimal aux func
 * @arglist: argument list
 *
 *Return: number of bytes
 */

int print_to_hexa(va_list arglist)
{
	char *s = va_arg(arglist, int);
	unsigned int num;
	int i = 0;
	int bytes = 0;

	if (s == '\0')
		return (-1);
	while (s[i] != '\0')
	{
		if (((s[i] > 0) && (s[i] < 32)) || (s[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			bytes += 2;
			num = s[i];
			if (num > 9)
			{
				_putchar((num / 16) + 48);
				_putchar((num % 16) + 55);
				bytes += 2;
			}
			else
			{
				_putchar(48);
				_putchar((num % 16) + 48);
				bytes += 2;
			}
		}
		else
		{
			_putchar(s[i]);
			bytes++;
		}
	i++;
	}
	return (bytes++);
}
