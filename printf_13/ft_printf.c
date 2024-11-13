#include "ft_printf.h"
#include <unistd.h>

int ft_printf(const char *format, ...) {
    va_list args;
    int len = 0;

    va_start(args, format);
    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'c')
                len += ft_putchar(va_arg(args, int));
            else if (*format == 's')
                len += ft_putstr(va_arg(args, const char *));
            else if (*format == 'p')
                len += ft_putptr(va_arg(args, void *));
            else if (*format == 'd' || *format == 'i')
                len += ft_putnbr(va_arg(args, int));
            else if (*format == 'u')
                len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
            else if (*format == 'x')
                len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
            else if (*format == 'X')
                len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
            else if (*format == '%')
                len += ft_putchar('%');
        } else
            len += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return len;
}
