/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** second_file
*/

#include "my.h"

update_command_t	*update_command(void)
{
    update_command_t *m = malloc(sizeof(update_command_t));

    m->byte = 0;
    m->ext = "exit";
    m->en = "env";
    m->seten = "setenv";
    m->buffer1 = malloc(sizeof(char *) * (m->byte + 1));
    return (m);
}

int	check_string(char *str, char *ptr)
{
    int	i = 0;
    int	k = 0;

    for (i = 0; str[i] != '\0' && (str[i] == ptr[i]); i++);
    k = str[i] - ptr[i];
    return (k);
}

char	*string_stdin(char *str, size_t a)
{
    int	b = 0;

    str = NULL;
    b = getline(&str, &a, stdin);
    if (b == -1)
        return (NULL);
    return (str);
}

char	*my_strndup(char const *src, int n)
{
    int	i = 0;
    char *str = malloc(n + 1);

    while (i < n) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
