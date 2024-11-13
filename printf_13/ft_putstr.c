#include "ft_printf.h"
#include <unistd.h>

int ft_putstr(const char *str) {
    int len = 0;
    while (str[len])
        len++;
    return write(1, str, len);
}
