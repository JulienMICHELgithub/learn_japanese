/*
** EPITECH PROJECT, 2024
** my
** File description:
** puterr
*/

#include "libmy.h"

void my_puterr(const char *str)
{
    write(2, str, my_strlen(str));
}
