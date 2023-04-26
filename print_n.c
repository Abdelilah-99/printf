#include "main.h"
/**
 * print_digit - print str num
 * @ls: initializing
 * Return: the result of _puts finc
*/
int print_digit(va_list ls)
{
	int n = va_arg(ls, int), l, i, f_w = 0;
	char buffer[50];

	func_itoa(n, buffer);
	l = _len(buffer);
	if (f_w > l)
	{
		for (i = 0; i < f_w - l; i++)
			putchar(' ');
	}
	return (_puts(buffer));
}
/**
 * print_unsigned - prints unsigned integers from a va_list
 * @ls: va_list of unsigned integers to be printed
 * Return: number of characters printed
 */
int print_unsigned(va_list ls)
{
	unsigned int n = va_arg(ls, unsigned int);
	char buffer[50];

	func_itoa(n, buffer);
	return (_puts(buffer));
}
