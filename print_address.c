#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_address - print memory address
 *@arglist: argument list
 *Return: return number of bytes
 */

int print_address(va_list arglist)
{
	unsigned long n = (unsigned long)va_arg(arglist, void *);
	unsigned long num = 0;
	int bytes = 0, i = 0, j = 0;
	char array[20];

	if (n)
	{
		num = n;
		if (n == 0)
		{
			_putchar(48);
			bytes++;
			return (bytes);
		}
		while (num != 0)
		{
			(num % 16 < 10) ? (array[j] = 48 + num % 16) : (array[j] = 87 + num % 16);
			j++;
			num = num / 16;
			bytes++;
		}
		array[j] = 'x';
		j++;
		array[j] = '0';
		j++;
		bytes += 2;
		for (i = j - 1 ; i > 0; i--)
		{
			_putchar(array[i]);
		}
		return (bytes);
	}
	else
		return (-1);

}
