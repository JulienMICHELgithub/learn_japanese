/*
** EPITECH PROJECT, 2024
** my
** File description:
** concat
*/

#include "libmy.h"

char *my_concat(char *s1, char *s2)
{
    int len = my_strlen(s1) + my_strlen(s2);
    char *str = malloc(sizeof(char) * len + 1);
    int k = 0;

    str[len] = '\0';
    for (int i = 0; s1[i]; ++i) {
        str[k] = s1[i];
        ++k;
    }
    for (int i = 0; s2[i]; ++i) {
        str[k] = s2[i];
        ++k;
    }
    return (str);
}

int concat_len(int count, va_list ap)
{
    int len = 0;
    char *str = 0;

    for (int i = 0; i < count; i++){
        str = va_arg(ap, char *);
        if (str){
            len += my_strlen(str);
        }
    }
    return (len);
}

void my_concat_boucle(int count, va_list ap, char *result)
{
    char *str = NULL;
    int k = 0;

    for (int i = 0; i < count; i++){
        str = va_arg(ap, char *);
        if (!str)
            continue;
        for (int j = 0; str[j]; ++j) {
            result[k] = str[j];
            ++k;
        }
    }
}

char *my_connncat(int count, ...)
{
    va_list ap;
    char *result = 0;
    int len = 0;

    va_start(ap, count);
    len = concat_len(count, ap);
    va_end(ap);
    result = malloc(sizeof(char) * (len + 1));
    result[len] = 0;
    va_start(ap, count);
    my_concat_boucle(count, ap, result);
    va_end(ap);
    return (result);
}
