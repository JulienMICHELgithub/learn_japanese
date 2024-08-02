/*
** EPITECH PROJECT, 2024
** src
** File description:
** main
*/

#include "../include/include.h"

static int rand_int(int line)
{
    return ((int)rand() % line);
}


void play(int line, char **tab)
{
    int which_one = rand_int(line);
    char **voc = my_str_to_word_array(tab[which_one], ":");
    char *letter = 0;

    printf("\033[1;34mYou have to write : --\033[0m");
    printf("\033[1;31m%s\033[0m", voc[0]);
    printf("\033[1;34m--\033[0m\n");
    printf("\033[1;33mPress enter when you are done\033[0m");
    while (getchar() != '\n');
    printf("\033[1;32mThe correct answer was : \033[0m");
    printf("\033[1;34m%s\033[0m\n", voc[1]);

}

void game(char *file)
{
    int line = 0;
    int i = 0;
    char **tab = 0;

    srand(time(0));
    tab = my_str_to_word_array(file,"\n");
    while (tab[line])
        line++;
    for (int j = 0; j <= 10; j++) {
        play(line, tab);
    }
}

char *open_file(const char *file_path)
{
    struct stat sb;
    FILE *fd = NULL;
    char *buffer = NULL;

    if (stat(file_path, &sb) == -1)
        return (NULL);
    fd = fopen(file_path, "r");
    if (fd == NULL)
        return (NULL);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (!buffer)
        exit(EXIT_FAILURE);
    if (fread(buffer, sb.st_size, 1, fd) != 1) {
        fclose(fd);
        free(buffer);
        return (NULL);
    }
    buffer[sb.st_size] = '\0';
    fclose(fd);
    return (buffer);
}

int my_error_gestion(const int ac, const char *av[], const char *env[])
{
    (void)(env);
    if (ac != 2)
        return (84);
    return (0);
}

int main(const int ac, const char *av[], const char *env[])
{
    int return_bis = my_error_gestion(ac, av, env);
    char *file = 0;

    if (return_bis == 84)
        return (84);
    file = open_file(av[1]);
    if (!file)
        return 84;
    game(file);
    free(file);
    return (0);
}
