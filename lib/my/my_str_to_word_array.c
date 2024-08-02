/*
** EPITECH PROJECT, 2024
** my
** File description:
** mstr_to_word_array
*/

#include "libmy.h"

static int my_strchr2(const char c, const char *delimiters)
{
    if (c == '\0')
        return (0);
    for (int k = 0; delimiters[k]; ++k)
        if (delimiters[k] == c)
            return (1);
    return (0);
}

int my_strclen(const char *str, const char *delimiters)
{
    int k = 0;

    while (str[k] && !my_strchr2(str[k], delimiters))
        ++k;
    return (k);
}

static int count_words(char const *str, const char *delimiters)
{
    int size = 0;
    int i = 0;

    while (str[i]) {
        while (my_strchr2(str[i], delimiters) == 1)
            i++;
        if (!str[i])
            break;
        while (str[i] && my_strchr2(str[i], delimiters) == 0)
            i++;
        size++;
    }
    return size;
}

char *extract_word(char **str, const char *delimiters)
{
    int len = my_strclen(*str, delimiters);
    char *cpy = malloc(sizeof(char) * (len + 1));
    int i = 0;

    cpy[len] = '\0';
    for (i = 0; **str && !my_strchr2(**str, delimiters); ++i) {
        cpy[i] = **str;
        ++(*str);
    }
    return (cpy);
}

char **my_str_to_word_array(char *str, const char *delimiters)
{
    char *ptr = str;
    char **tab = NULL;
    int i = 0;
    int size = count_words(str, delimiters);

    tab = malloc(sizeof(char *) * (size + 1));
    if (!tab)
        return NULL;
    tab[size] = NULL;
    for (i = 0; i < size; ++i) {
        while (*ptr && my_strchr2(*ptr, delimiters))
            ++ptr;
        tab[i] = extract_word(&ptr, delimiters);
    }
    return (tab);
}
