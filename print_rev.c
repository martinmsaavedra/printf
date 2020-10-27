#include "holberton.h"
#include <stdio.h>
/**
 *print_rev - prints in reverse
 *@arglist: argument list
 *Return: return bytes
 */
int print_rev(va_list arglist)
{
	int i = 0;
	int bytes = 0;
	char *s = va_arg(arglist, char *);

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		bytes++;
	}
	return (bytes);
}
