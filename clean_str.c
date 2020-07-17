/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** clean_str
*/

#include "my.h"

int	is_tab_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

char	*clean_str(char *ptr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str = malloc(sizeof(char) * my_strlen(ptr) + 1);

    for ( ; is_tab_space(ptr[i]) != 0; i++);
    while (ptr[i] != '\0') {
        for ( ; is_tab_space(ptr[i]) == 0 && ptr[i] != '\0'; j++, i++) {
            str[j] = ptr[i];
        }
        while (is_tab_space(ptr[i]) == 1 && ptr[i] != '\0') {
            i++;
        }
        str[j] = ' ';
        j++;
    }
    str[j - 1] = '\0';
    return (str);
}

void	my_show_word_array(char **str)
{
    int	i = 0;

    while (str[i]) {
        my_putstr(str[i]);
        my_putchar('\n');
        i++;
    }
}
