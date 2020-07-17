/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av, char **env)
{
    update_command_t *m = update_command();

    if (ac == 1) {
        first_function(m, env);
    } else
        return (84);
    return (0);
}
