/*
** EPITECH PROJECT, 2024
** my
** File description:
** is_num
*/

#include "libmy.h"

int my_letter_isnum(char letter)
{
    if (letter < '0' || letter > '9')
        return 84;
    return 0;
}

int my_str_isnum(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return 84;
    return 0;
}
