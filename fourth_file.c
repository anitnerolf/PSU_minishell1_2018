/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** fourth_file
*/

#include "my.h"

char	*take_string(char *str)
{
    char *ptr = malloc(sizeof(char) * my_strlen(str) + 1);
    int	i = 0;
    int	k = my_strlen(str);

    while (str[i] != '\0' && i < k - 1) {
        ptr[i] = str[i];
        i++;
    }
    return (ptr);
}
