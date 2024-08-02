/*
** EPITECH PROJECT, 2024
** my
** File description:
** putchar
*/

#include "libmy.h"

void my_putchar(const char c)
{
    write(1, (char[1]){c}, 1);
}
