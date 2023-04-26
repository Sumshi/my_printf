#include "main.h"
#include <stdio.h>
/**
 * print_char - prints character
 * @args: character to be printed
 * Return: Always 0.
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
