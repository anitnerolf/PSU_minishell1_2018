/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** is_num
*/

#include "my.h"

int	is_number(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 48 || str[i] > 57)
            return (1);
        i++;
    }
    return (0);
}
