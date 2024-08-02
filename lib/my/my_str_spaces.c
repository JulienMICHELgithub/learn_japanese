/*
** EPITECH PROJECT, 2024
** my
** File description:
** str_spaces
*/

#include "libmy.h"

static int count_words_spaces(char const *str)
{
    int size = 0;
    int i = 0;

    while (str[i]) {
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
            i++;
        if (!str[i])
            break;
        while (str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
            i++;
        size++;
    }
    return size;
}

static char *get_word_spaces(const char *str, int *n)
{
    int j = 0;
    char *cpy = 0;

    while (str[j] && str[j] != '\n' && str[j] != '\t' && str[j] != ' ')
        j++;
    cpy = malloc(sizeof(char) * (j + 1));
    cpy[j] = '\0';
    for (int i = 0; str[i] && i < j; ++i)
        cpy[i] = str[i];
    *n += j;
    return cpy;
}

char **my_str_spaces(char const *str)
{
    int size = count_words_spaces(str);
    char **tab = malloc(sizeof(char *) * (size + 1));
    int k = 0;

    tab[size] = NULL;
    for (int i = 0; i < size; i++) {
        while (str[k] == '\n' || str[k] == '\t' || str[k] == ' ')
            k++;
        tab[i] = get_word_spaces(str + k, &k);
    }
    return (tab);
}
