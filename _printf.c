#include "main.h"
/**
 * _printf - function kadiir nefs service d printf ghi hna %c %s %%
 * @format: hnaa ghady nab9a retrive les char
 * Return: count or -1
 */
int _printf(const char *format, ...)
{
	va_list typef;
	int i = 0, count = 0;
	int (*chars)(va_list);

	if (!format)
		return (-1);
	va_start(typef, format);

	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			while (format[i + 1] == ' ')
			{
				if (format[i + 2] == '\0')
					return (-1);
				i++;
			}
			chars = get_f(&format[++i]);
			if (chars != NULL)
				count += chars(typef);
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
	}
	va_end(typef);
	return (count);
}
