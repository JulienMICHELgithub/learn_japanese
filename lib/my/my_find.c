/*
** EPITECH PROJECT, 2024
** my
** File description:
** my_find
*/

#include "libmy.h"

int my_find_letter_in_nbr_string(char *str)
{
    for (int i = 0; str[i]; i++) {
        if ((str[0] >= '0' && str[0] <= '9') &&
            (str[i] < '0' || str[i] > '9')) {
            return 1;
        }
        if (str[0] <= '0' || str[0] >= '9') {
            return 2;
        }
    }
    return 0;
}
