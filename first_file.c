/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** first_file
*/

#include "my.h"

void	my_env(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        my_putstr(env[i]);
        my_putchar('\n');
    }
}
