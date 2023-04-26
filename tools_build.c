#include "main.h"
/**
 * func_itoa - ghady nrajja3 int l str
 * @n: nmbr
 * @s: pointer andiir fiih n
*/
void func_itoa(long n, char s[])
{
	long sign = n;
	unsigned int i = 0;

	if (sign < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	_rev(s);
}
/**
 * _rev - biin nfutu 3la itoa ayrja3 dak chii ma9luub
 * @s: string
*/
void _rev(char s[])
{
	unsigned int i = 0, l = 0;
	char t;

	l = _len(s);

	for (; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
/**
 * _len - na7ssab str
 * @str: str
 * Return: len
*/
int _len(char *str)
{
	unsigned int l = 0;

	while (str[l])
		l++;

	return (l);
}
