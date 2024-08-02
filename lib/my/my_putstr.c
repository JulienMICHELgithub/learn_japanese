/*
** EPITECH PROJECT, 2024
** my
** File description:
** putstr
*/

#include "libmy.h"

int my_putstr(char *str)
{
    return (write(1, str, my_strlen(str)));
}
