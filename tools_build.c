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
{
	unsigned int i = 0, len = 0;
	char temp;

	len = _len(s);

	for (; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
}
/**
 * _len - na7ssab str
 * @s: str
 * Return: len
*/
unsigned int _len(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}
