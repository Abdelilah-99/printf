#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - print
 * @s: str
 * Return: i
*/
int _puts(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		putchar(s[i]);
	return(i);	
}
