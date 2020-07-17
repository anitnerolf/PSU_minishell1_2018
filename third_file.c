/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** third_file
*/

#include "my.h"

int	count_words(char *str)
{
    int	c = 0;
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0')
            c++;
        i++;
    }
    return (c + 1);
}

int	count_lines(char **env)
{
    int	i = 0;
    int	nb = 0;

    while (env[i] != NULL) {
        nb++;
        i++;
    }
    return (nb);
}

char	**copy_environment(char **env)
{
    int	z = count_lines(env);
    char **str = malloc(sizeof(char *) * (z + 1));
    int	i = 0;
    int	k = 0;
    int	j = 0;

    for (i = 0; env[i] != NULL; i++) {
        str[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        str[i] = my_strcpy(str[i], env[i]);
    }
    str[i] = NULL;
    return (str);
}

char	*my_strcpy(char *dest, char const *src)
{
    int	i = 0;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
