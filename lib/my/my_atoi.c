/*
** EPITECH PROJECT, 2024
** my
** File description:
** atoi
*/

#include "libmy.h"

long my_atoi(char *str)
{
    long i = 0;
    long j = 1;
    long nbr = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-') {
        j = -1;
        i++;
    } else if (str[i] == '+')
        i++;
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        nbr = nbr * 10 + (str[i] - '0');
        if ((j * nbr) > 9223372036854775807)
            return (9223372036854775807);
        if ((j * nbr) < -9223372036854775807)
            return (-9223372036854775807);
    }
    return ((long)(nbr * j));
}
