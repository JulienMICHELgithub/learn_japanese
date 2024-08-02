/*
** EPITECH PROJECT, 2024
** my
** File description:
** pow
*/

#include "libmy.h"

double my_pow(double x, double y)
{
    double z = x;

    for (int i = 1; i < y; ++i) {
        z *= x;
    }
    return (z);
}
