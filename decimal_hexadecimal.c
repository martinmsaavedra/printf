#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_decimal - prints decimal
*@arglist:argument list
*Return: number of bytes
*/
int print_decimal(va_list arglist)
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
		bytes = print_decimal_aux(num, n, pbytes);
	}
	return (bytes);
}
/**
 *print_decimal_aux - prints decimal
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
 */
int print_decimal_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

	while (num > 0)
	{
		num = num / 10;
		contador++;
	}
	length = contador;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (-1);
	num = n;
	while (contador > 0)
	{
		array[j] = num % 10;
		j++;
		num = num / 10;
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
 *print_hexadecimal - prints hexadecimal
 *@arglist:argument list
 *Return: number of bytes
 */
int print_hexadecimal(va_list arglist)
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
		bytes = print_hexadecimal_aux(num, n, pbytes);
	}
	return (bytes);
}
/**
 *print_hexadecimal_aux - prints hexadecimal aux func
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
 */
int print_hexadecimal_aux(unsigned int num, unsigned int n, int *pbytes)
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
		(num % 16 < 10) ? (array[j] = 48 + num % 16) : (array[j] = 87 + num % 16);
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
