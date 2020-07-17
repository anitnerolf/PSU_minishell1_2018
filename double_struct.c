/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** double_struct
*/

#include "my.h"

int	check_column(char *str)
{
    int	i = 0;

    for (i = 0; str[i] != '\0' && str[i] != ' '; i++);
    return (i);
}

double_t	*double_str(double_t *m)
{
    m = malloc(sizeof(double_t));
    m->i = 0;
    m->j = 0;
    m->k = 0;
}

char	**double_array(char *f)
{
    char *str = clean_str(f);
    int a = count_words(str);
    int b = check_column(str);
    char **arr = malloc(sizeof(char *) * (a + 1));
    double_t *m = double_str(m);

    while (str[m->k] != '\0') {
        if (str[m->k] == ' ') {
            for ( ; str[m->k] == ' '; m->k++);
            m->i++;
            m->j = 0;
        }
        arr[m->i] = malloc(sizeof(char) * (b + 1));
        for ( ; str[m->k] != ' ' && str[m->k] != '\0'; m->j++, m->k++)
            arr[m->i][m->j] = str[m->k];
        arr[m->i][m->j] = '\0';
    }
    arr[m->i + 1] = NULL;
    return (arr);
}

char	**do_setenv(update_command_t *m, char **env, char *str, char *z)
{
    int	a = count_lines(env);
    int	i = 0;
    char **ptr = copy_environment(env);
    char *b = my_strcat(str, "=");
    char *c = my_strcat(b, z);

    if (str[0] >= 48 && str[0] <= 57) {
        my_putstr("setenv: Variable name must begin with a letter.\n");
    } else {
        ptr[a] = c;
        ptr[a + 1] = NULL;
        return (ptr);
    }
}

char	**one_do_setenv(update_command_t *m, char **env, char *str)
{
    int	a = count_lines(env);
    int	i = 0;
    char **ptr = copy_environment(env);
    char *b = my_strcat(str, "=");

    if (str[0] >= 48 && str[0] <= 57) {
        my_putstr("setenv: Variable name must begin with a letter.\n");
    } else {
        ptr[a] = b;
        ptr[a + 1] = NULL;
        return (ptr);
    }
}
