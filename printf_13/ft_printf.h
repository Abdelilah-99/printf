#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(const char *str);
int ft_putnbr(int n);
int ft_putnbr_base(unsigned long long n, const char *base);
int ft_putptr(void *ptr);

#endif
