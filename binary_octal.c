#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_binary - prints char
*@arglist:argument list
*Return: number of bytes
*/
int print_binary(va_list arglist)
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
		bytes = print_binary_aux(num, n, pbytes);
	}
	return (bytes);
}
/**
 *print_binary_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
 */
int print_binary_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

	while (num > 0)
	{
		num = num / 2;
		contador++;
	}
	length = contador;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (-1);
	num = n;
	while (contador > 0)
	{
		array[j] = num % 2;
		j++;
		num = num / 2;
		contador--;
	}
	while (length > 0)
	{
		_putchar(array[length - 1] + '0');
		length--;
		(*pbytes)++;
	}
	free(array);
return ((*pbytes));
}
/**
 *print_octal - prints char
 *@arglist:argument list
 *Return: number of bytes
 */
int print_octal(va_list arglist)
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
		bytes = print_octal_aux(num, n, pbytes);
	}
	return (bytes);
}
/**
 *print_octal_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
 */
int print_octal_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

	while (num > 0)
	{
		num = num / 8;
		contador++;
	}
	length = contador;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (-1);
	num = n;
	while (contador > 0)
	{
		array[j] = num % 8;
		j++;
		num = num / 8;
		contador--;
	}
	while (length > 0)
	{
		_putchar(array[length - 1] + '0');
		length--;
		(*pbytes)++;
	}
	free(array);
	return ((*pbytes));
}
