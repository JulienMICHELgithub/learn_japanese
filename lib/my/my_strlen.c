/*
** EPITECH PROJECT, 2024
** my
** File description:
** strlen
*/

#include "libmy.h"

int my_strlen2(char **str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i]) {
        ++i;
    }
    return i;
}
