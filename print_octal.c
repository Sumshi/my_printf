#include<stdio.h>
#include "main.h"
#include<limits.h>
/**
 * print_octal- prints octal of a number
 * @args: parameter
 * Return: Always 0
 */
int print_octal(va_list args)
{
	int count = 0;
	char octal[100];
	int i = 0;
	int j;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		octal[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j]);
		count++;
	}

	return (count);
}
