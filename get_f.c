#include "main.h"
/**
 * get_f - Retrieve the printing function corresponding
 * to a given format specifier
 * @format: The format specifier
 * Return: NULL or the func
*/
int (*get_f(const char *format))(va_list)
{
	int i = 0;
	fct_t fct_types[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
        {"i", print_digit},
		{"d", print_digit},
		{NULL, NULL}};

	for (; fct_types[i].ict; i++)
	{
		if (*format == *(fct_types[i].ict))
			return (fct_types[i].fn);
	}
	return (NULL);
}
