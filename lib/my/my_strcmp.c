/*
** EPITECH PROJECT, 2024
** my
** File description:
** are_almost_equal
*/

#include "libmy.h"

int are_almost_equal(char *str, char *prim)
{
    int i = 0;

    while (prim[i] != '\0') {
        if (str[i] != prim[i])
            return 84;
        ++i;
    }
    return 0;
}

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        ++i;
    }
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return (84);
    while (s1[i]) {
        if (s1[i] != s2[i])
            return (84);
        i++;
    }
    return (0);
}
