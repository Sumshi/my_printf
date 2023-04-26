#include "main.h"
/**
 * print_hex_upper - Prints a hexadecimal number in uppercase.
 * @args: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex_upper(va_list args)
{
	int i;
	int *array;
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
