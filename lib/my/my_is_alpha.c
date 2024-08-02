/*
** EPITECH PROJECT, 2023
** my
** File description:
** isalpha
*/

#include "libmy.h"

int is_alpha(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return (84);
    return (0);
}
