#include "main.h"
/**
 * print_rot13 - print string in ROT13
 * @args:  parameter
 * Return: count
 *
 */
int print_rot13(va_list args)
{
	int i, j, count = 0;
	int k = 0;
	char *s;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";/*input*/
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";/*output*/

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)/*26x 2 alphabets both upper and lower*/
		{
			if (a[j] == s[i])
			{
				_putchar(b[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);

}
