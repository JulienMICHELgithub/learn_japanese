/*
** EPITECH PROJECT, 2023
** my
** File description:
** strchr/strrchr
*/

#include "libmy.h"

char *my_strchr(char *str, char p)
{
    for (int k = 0; str[k]; ++k)
        if (str[k] == p)
            return (str + k);
    return (NULL);
}

char *my_strrchr(char *str, char p)
{
    for (int i = my_strlen(str); i >= 0; i--)
        if (str[i] == p)
            return (str + i + 1);
    return NULL;
}
