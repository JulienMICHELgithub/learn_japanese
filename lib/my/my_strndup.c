/*
** EPITECH PROJECT, 2024
** my
** File description:
** strndup
*/

#include "libmy.h"

char *my_strndup(char *str, int n)
{
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));

    cpy[n] = '\0';
    for (int i = 0; i < n; i++) {
        cpy[i] = str[i];
    }
    return (cpy);
}
