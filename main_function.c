/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** main_function
*/

#include "my.h"

void	check_string_stdin(update_command_t *m, char *k)
{
    if (k == NULL || check_string(clean_str(k), m->ext) == 0) {
        if (isatty(0))
            my_putstr("exit\n");
        exit(0);
    }
}

int	first_function(update_command_t *m, char **env)
{
    char *k = NULL;
    char	**s = NULL;
    int	i = 0;

    if (isatty(0))
        my_putstr("$> ");
    signal(SIGINT, handle_ctrl_c);
    k = string_stdin(k, 0);
    check_string_stdin(m, k);
    s = double_array(k);
    if (s[0] == NULL)
        first_function(m, env);
    while (check_string(k, m->ext) != 0) {
        do_this(m, env, k, s);
    }
    exit (0);
}

void	one_param_env(update_command_t *m, char **env, char *k, char **s)
{
    if ((check_string(s[0], m->en) == 0 || \
    check_string(s[0], m->seten) == 0) && !s[1]) {
        my_env(env);
        first_function(m, env);
    } else if (check_string(s[0], m->seten) == 0) {
        if (s[1] && !s[2]) {
            env = one_do_setenv(m, env, s[1]);
        } else if (s[1] && s[2] && !s[3]) {
            env = do_setenv(m, env, s[1], s[2]);
        } else
            my_putstr("setenv: Too many arguments.\n");
        first_function(m, env);
    } else {
        my_putstr(s[0]);
        my_putstr(": '");
        my_putstr(s[1]);
        my_putstr("': No such file or directory\n");
        first_function(m, env);
    }
}

void	do_this(update_command_t *m, char **env, char *k, char **s)
{
    if (check_string(s[0], m->en) == 0 || \
        check_string(s[0], m->seten) == 0) {
        one_param_env(m, env, k, s);
    } else if (check_string(k, "\n") != 0) {
        my_putstr(s[0]);
        my_putstr(": Command not found.\n");
        first_function(m, env);
    } else
        first_function(m, env);
}
