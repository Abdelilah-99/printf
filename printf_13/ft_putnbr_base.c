#include "ft_printf.h"

int ft_putnbr_base(unsigned long long n, const char *base) {
    int len = 0;
    unsigned long long base_len = 0;
    while (base[base_len])
        base_len++;
    if (n >= base_len) {
        len += ft_putnbr_base(n / base_len, base);
    }
    len += ft_putchar(base[n % base_len]);
    return len;
}
