#include"main.h"
#include<math.h>
/**
 * print_unsigned - prints unsigned integer
 * @args: parameter
 * Return: Always 0
 */
int print_unsigned(va_list args)
{
	int count = 0;
	unsigned int num = 0;
	int digit_count, i;
	unsigned int digit, div;
	unsigned int n;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		num = n;
		digit_count = 0;
		while (num > 0)
		{
			num /= 10;
			digit_count++;
		}
		num = n;
		while (digit_count > 0)
		{
			digit_count--;
			div = 1;
			for (i = 1; i <= digit_count; i++)
				div *= 10;
			digit = num / div;
			_putchar(digit + '0');
			count++;
			num -= digit * div;
		}
	}
	return (count);
}
