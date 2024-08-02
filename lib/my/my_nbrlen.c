/*
** EPITECH PROJECT, 2024
** my
** File description:
** nbrlen
*/

#include "libmy.h"

int my_nbrlen(int nb)
{
    int i = 0;

    if (my_isneg(nb)) {
        nb *= -1;
        ++i;
    }
    if (nb < 9) {
        ++i;
        return (i);
    }
    while (nb){
        nb /= 10;
        ++i;
    }
    return (i);
}
