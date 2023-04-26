#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _print_string - prints a string
 * @args: string to print
 *
 * Return: number of characters printed
 */
int _print_string(va_list args)
{
	char *str;
	int i;
	int len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);/*len += _strlen(str);*/

		for (i = 0; i < len; i++)
			_putchar(str[i]);

		return (len);
	}
}
