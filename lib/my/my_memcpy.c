/*
** EPITECH PROJECT, 2024
** my
** File description:
** memcpy
*/

#include "libmy.h"

void *my_memcpy(void *dest, const void *src, size_t size)
{
    for (size_t i = 0; i != size; i++)
        (char *){dest}[i] = *((char *)(src) + i);
    return (dest);
}
