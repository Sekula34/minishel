#ifndef MINISHEL
#define MINISHEL
#define NAME "minishel: "



typedef struct s_redirect
{
	char *redirect;
	s_redirect *next;
}	t_redirect;

typedef struct s_cmd
{
	char		*path;
	char		**args;
	t_redirect 	*redirect_lst;
	s_cmd		*next;

}	t_cmd;

typedef struct s_shell
{
	t_cmd	cmd_lst;
}	t_shell;

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

char	**ft_split(char *str);


#endif