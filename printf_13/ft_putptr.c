#include "ft_printf.h"

int ft_putptr(void *ptr) {
    int len = 0;
    len += ft_putstr("0x");
    len += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
    return len;
}
