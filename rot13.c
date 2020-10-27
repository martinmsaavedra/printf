#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_rot13 - prints in rot13
 *@argList: argument list
 *Return: return number of bytes
 */

int print_rot13(va_list argList)
{
	char *chain1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *chain2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j, bytes = 0;
	char *s = va_arg(argList, char *);

if (s == NULL)
	return (-1);
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; chain1[j] != '\0'; j++)
	{
		if (s[i] == chain1[j])
		{
			_putchar(chain2[j]);
			bytes++;
			break;
		}
	}
	if (!chain1[j])
	{
		_putchar(s[i]);
		bytes++;
	}
}
	return (bytes);
}
