/*
** EPITECH PROJECT, 2024
** my
** File description:
** lib
*/

#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int my_isneg(const int nb);
int my_str_isnum(char *str);
int my_letter_isnum(char letter);
int is_alpha(char *str);
void my_putchar(const char c);
int my_putstr(char *str);
void my_puterr(const char *str);
void my_putstr_dir(char *str);
int my_strlen(const char *str);
char *my_strndup(char *str, int n);
int my_strlen2(char **str);
int my_put_nbr(int nb);
char *my_concat(char *s1, char *s2);
char *my_connncat(int count, ...);
char *my_strcpy(char *dest, char *src);
int my_isneg(const int nb);
char *my_itoa(int nb);
int my_nbrlen(int nb);
void my_swap(char *a, char *b);
char **my_str_to_word_array(char *str, const char *delimiters);
long my_atoi(char *s);
char **my_str_spaces(char const *str);
int are_almost_equal(char *str, char *prim);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char *s1, char *s2, int n);
double my_pow(double x, double y);
char *my_strdup(char *str);
int my_strstr(char *str, char const *to_find);
void *my_memcpy(void *dest, const void *src, size_t size);
char *my_strrchr(char *str, char p);
char *my_strchr(char *str, char p);
int my_find_letter_in_nbr_string(char *str);
int mini_printf(const char *format, ...);
