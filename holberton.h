#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>

/**
 *struct opt - structure of options
 *@reference: character option
 *@function: pointer to function
 */

typedef struct opt
{
	char *reference;
	int (*function)();
} opt;

int _printf(const char * const format, ...);
int _print_aux(const char *, va_list, opt *);
int _strlen(char *s);
int _putchar(char c);
int print_string(va_list);
int print_char(va_list);
int print_int(va_list);
int print_int_aux(unsigned int, int, int *);
int print_binary(va_list);
int print_binary_aux(unsigned int, unsigned int, int *);
int print_octal(va_list);
int print_octal_aux(unsigned int, unsigned int, int *);
int print_decimal(va_list);
int print_decimal_aux(unsigned int, unsigned int, int *);
int print_hexadecimal(va_list);
int print_hexadecimal_aux(unsigned int num, unsigned int n, int *pbytes);
int print_hexadecimal_X(va_list);
int print_hexadecimal_X_aux(unsigned int num, unsigned int n, int *pbytes);
int print_rot13(va_list argList);
int print_rev(va_list arglist);
int print_to_hexa(va_list);
int print_address(va_list);
#endif
