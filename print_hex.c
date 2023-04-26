#include "main.h"
/**
 * print_hex_lower - Prints a hexadecimal number in lowercase.
 * @args: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex_lower(va_list args)
{
	int i;
	int count = 0;
	unsigned int n;
	int *arr;
	unsigned int temp;

	n = va_arg(args, unsigned int);
	temp = n;
	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
