#include <stdio.h>
#include "ft_printf.h"

int main(void) {
    // Test %c
    printf("Original printf: %c\n", 'A');
    ft_printf("Custom ft_printf: %c\n", 'A');

    // Test %s
    printf("Original printf: %s\n", "Hello, World!");
    ft_printf("Custom ft_printf: %s\n", "Hello, World!");

    // Test %p
    int *ptr = NULL;
    printf("Original printf: %p\n", (void *)ptr);
    ft_printf("Custom ft_printf: %p\n", (void *)ptr);

    // Test %d and %i
    printf("Original printf: %d\n", 42);
    ft_printf("Custom ft_printf: %d\n", 42);
    printf("Original printf: %i\n", -42);
    ft_printf("Custom ft_printf: %i\n", -42);

    // Test %u
    printf("Original printf: %u\n", 42);
    ft_printf("Custom ft_printf: %u\n", 42);

    // Test %x and %X
    printf("Original printf: %x\n", 255);
    ft_printf("Custom ft_printf: %x\n", 255);
    printf("Original printf: %X\n", 255);
    ft_printf("Custom ft_printf: %X\n", 255);

    // Test %%
    printf("Original printf: %%\n");
    ft_printf("Custom ft_printf: %%\n");

    // Test mixed format specifiers
    printf("Original printf: %c %s %p %d %i %u %x %X %%\n", 'A', "Hello", (void *)ptr, 42, -42, 42, 255, 255);
    ft_printf("Custom ft_printf: %c %s %p %d %i %u %x %X %%\n", 'A', "Hello", (void *)ptr, 42, -42, 42, 255, 255);

    return 0;
}
