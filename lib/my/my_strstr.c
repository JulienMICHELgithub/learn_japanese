/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** my_strstr
*/

int my_strstr_search(char const *str, char const *to_find, int i)
{
    for (int j = 0; to_find[j] != '\0'; j++) {
        if (to_find[j] != str[j + i])
            return (1);
    }
    return (0);
}

int my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int r = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[0] && r != 0)
            r = my_strstr_search(str, to_find, i);
    }
    return (r);
}
