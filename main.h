#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<math.h>

/**
 * struct format - match the conversion specifiers for printf
 * @op: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *op;
	int (*f)();
} found_match;


int _printf(const char *format, ...);
int print_number(va_list args);
int _putchar(char c);
int print_char(va_list args);
int _print_string(va_list args);
int _strlen(char *s);
int _printbinary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int handle_S_conversion(va_list args);
int _print_hex(unsigned long int num);
int str_rev(va_list args);
int _print_address(va_list args);
int print_rot13(va_list args);
int print_percent(void);
#endif
