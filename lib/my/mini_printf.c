/*
** EPITECH PROJECT, 2023
** my
** File description:
** mini_printf
*/

#include "libmy.h"

int flags(char format, va_list args)
{
    if (format == 'd')
        my_put_nbr(va_arg(args, int));
    if (format == 'i')
        my_put_nbr(va_arg(args, int));
    if (format == 's')
        my_putstr(va_arg(args, char *));
    if (format == 'c')
        my_putchar(va_arg(args, int));
    if (format == '%')
        my_putchar('%');
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);
    for (int i = 0; format[i]; ++i) {
        if (format[i] == '%') {
            flags(format[++i], args);
        } else {
            my_putchar(format[i]);
        }
    }
    return 0;
}
