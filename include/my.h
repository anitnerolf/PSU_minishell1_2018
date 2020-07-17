/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

typedef	struct	double_str
{
    int	i;
    int	j;
    int	k;
}	double_t;

typedef	struct	update_command
{
    size_t	byte;
    char	*buffer1;
    char	*ext;
    char	*en;
    char	*seten;
}	update_command_t;

char	**one_do_setenv(update_command_t *m, char **e, char *s);
char	**do_setenv(update_command_t *m, char **e, char *s, char *z);
int	count_lines(char **env);
char	**copy_environment(char **env);
char	*my_strcat(char *dest, char const *str);
void	do_this(update_command_t *m, char **env, char *k, char **s);
int	count_words(char *str);
int	check_column(char *str);
char	**my_str_to_word_tab(char *str);
char	**double_array(char *str);
char	*clean_str(char *str);
int	is_tab_space(char c);
char	*my_strndup(char const *str, int n);
void	check_string_stdin(update_command_t *m, char *k);
void	my_env(char **env);
char	*ltrim(char *str);
char	*rtrim(char *str);
char	*trim(char *str);
char	*take_string(char *str);
void	check_env(update_command_t *m, char **env, char *k);
char	*check_contain(char *str, char *ptr);
int	first_function(update_command_t *m, char **env);
int	find_equal_char(char *str);
char	*string_stdin(char *str, size_t nbr);
update_command_t	*update_command(void);
int	check_string(char *str, char *ptr);
void	my_putchar(char c);
int	my_putstr(char const *str);
char	*get_current_dir_name();
void	handle_ctrl_c(int c);
int	my_strlen(char const *str);
char	*my_str(char *dest, char const *src, int n);
char	*my_strncpy(char *new, char *str, int n);
char	*my_strcpy(char *dest, char const *src);

#endif /* MY_H_ */
