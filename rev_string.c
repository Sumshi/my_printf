#include "main.h"

/**
 * str_rev - function that prints string in reverse
 * @args: arguments
 * Return: the string
 */
int str_rev(va_list args)
{
	int i;
	int length = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	return (length);
}
