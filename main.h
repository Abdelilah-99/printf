#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct fct - Struct for formatting data.
 * @ict: *sym: Pointer to a character string.
 * @fn: func pointer to a function that takes a va_list as an arg.
 *
 */
typedef struct fct
{
	char *ict;
	int (*fn)(va_list);
} fct_t;

int _printf(const char *format, ...);
int (*get_f(const char *format))(va_list);
void _rev(char s[]);
void func_itoa(long n,char str[]);
int _len(char *str);
int _puts(char *s);
int print_digit(va_list ls);
int print_char(va_list ls);
int print_str(va_list ls);
int print_perc(va_list ls);
int _putchar(char c);
int print_unsigned(va_list ls);
#endif
