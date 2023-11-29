/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishel.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:43:41 by fseles            #+#    #+#             */
/*   Updated: 2023/11/27 16:43:45 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHEL_H
# define MINISHEL_H
# define NAME "minishel: "
# include "../libft/libft.h"
# include <errno.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vars
{
	char			*key;
	char			*value;
	struct s_vars	*next;
}	t_vars;

typedef struct s_redirect
{
	char				*redirect;
	struct s_redirect	*next;
}	t_redirect;

typedef struct s_cmd
{
	char			*path;
	char			**args;
	t_redirect		*redirect_lst;
	struct s_cmd	*next;

}	t_cmd;

typedef struct s_shell
{
	t_cmd	cmd_lst;
	int		last_exit_code;
	t_vars	vars;
}	t_shell;
# include "envexport.h"
# include "builtin.h"

#endif
