#include "main.h"
#include<stdlib.h>
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	found_match member[] = {
		{"%s", _print_string}, {"%c", print_char}, {"%%", print_percent},
		{"%i", print_number}, {"%d", print_number}, {"%b", _printbinary},
		{"%u", print_unsigned}, {"%o", print_octal}, {"%x", print_hex_lower},
		{"%X", print_hex_upper}, {"%S", handle_S_conversion}, {"%p", _print_address},
		{"%r", str_rev}, {"%R", print_rot13}
	};
	va_list args;
	int i = 0, j, count = 0, match = 0;

	va_start(args, format);

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		match = 0;
		j = 13;
		while (j >= 0)
		{
			if (member[j].op[0] == format[i] && member[j].op[1] == format[i + 1])
			{
				count += member[j].f(args);
				i = i + 2;
				match = 1;
				break;
			}
			j--;
		}
		if (!match)
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
