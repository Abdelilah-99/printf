#include "printf.h"
/**
 * print_char - this func is responsable of chat
 * @ls: retrieve ls
 * Return: 1
*/
int print_char(va_list ls)
{
	_putchar(va_arg(ls, int));
	return (1);
}
/**
 * print_str - func that print only string
 * @ls: retrieve ls
 * Return: i
*/
int print_str(va_list ls)
{
	int i = 0;
	char *str;

	str = va_arg(ls, char *);

	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_perc - func that print only perc
 * @ls: void ls mean that we don't need to use ls
 * Return: 1
*/
int print_perc(va_list ls)
{
	(void)(ls);
	_putchar('%');
	return (1);
}
