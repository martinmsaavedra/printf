#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_hexadecimal_X - prints hexadecimal
 *@arglist:argument list
 *Return: number of bytes
 */
int print_hexadecimal_X(va_list arglist)
{
	int bytes = 0;
	unsigned int n = va_arg(arglist, int);
	unsigned int num;
	int *pbytes = &bytes;

	num = n;

	if (num == 0)
	{
		_putchar('0');
		bytes++;
	}
	if (num > 0)
	{
		bytes = print_hexadecimal_X_aux(num, n, pbytes);
	}
return (bytes);
}
/**
 *print_hexadecimal_X_aux - prints hexadecimal aux func
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
 */
int print_hexadecimal_X_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, length;
	char *array;
	int j = 0;
	int i = 0;

	while (num > 0)
	{
		num = num / 16;
		contador++;
	}
	length = contador;
	array = (char *)malloc(sizeof(char) * length);
	if (array == NULL)
		return (-1);
	num = n;
	while (num != 0)
	{
		(num % 16 < 10) ? (array[j] = 48 + num % 16) : (array[j] = 55 + num % 16);
		j++;
		num = num / 16;
	}
	for (i = j; i > 0; i--)
	{
		_putchar(array[i - 1]);
		(*pbytes)++;
	}
free(array);
return ((*pbytes));
}
