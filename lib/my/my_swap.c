/*
** EPITECH PROJECT, 2024
** my
** File description:
** swap
*/

#include "libmy.h"

void my_swap(char *a, char *b)
{
    char tmp = *a;

    *a = *b;
    *b = tmp;
}
