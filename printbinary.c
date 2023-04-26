#include "main.h"
#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @args: parameter
 * Return: Always 0
 */
int _printbinary(va_list args)
{
	int count = 0;
	int i;
	int flag = 0;
	unsigned int p;
	unsigned int value = va_arg(args, unsigned int);

	for (i = 31 ; i >= 0 ; i--)
	{
		p = (value >> i) & 1;
		if (p || flag)
		{
			flag = 1;
			_putchar(p + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
