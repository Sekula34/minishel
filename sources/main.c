/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:44:01 by fseles            #+#    #+#             */
/*   Updated: 2023/12/05 17:46:28 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishel.h"

int	main(int argc, char **argv, char **envp)
{
	if(argc && argv && envp)
	{

	}
	t_shell shell;
	t_cmd cmd;
	t_cmd cmd2;
	// cd.args= (char *[]){"~", NULL};

	// t_redirect redirect2;
	// redirect2.file_name ="outputcat.txt";
	// redirect2.type ='o';
	// redirect2.next = NULL;

	// redirect.file_name = "input.txt";
	// redirect.next = &redirect2;
	// redirect.type = 'i';

	cmd.args= (char *[]){"cat command",NULL};
	cmd.cmd ="ls";
	cmd.redirect_lst = NULL;
	cmd.next = &cmd2;

	cmd2.args = (char *[]){"wc command",NULL};
	cmd2.cmd = "wc";
	cmd2.next = NULL;
	cmd2.redirect_lst = NULL;
	shell.cmd_lst = &cmd;

	

	if(shell_init(&shell, envp) == 1)
	{
		clear_list_env(&shell.head_env);
		clear_list_env(&shell.head_ex);
		clear_mini_env(&shell.mini_env);
		free(shell.minishell_exec);
		return (EXIT_FAILURE);

	}
	if(execute_all_cmds(shell) != 0)
	{
		clear_list_env(&shell.head_env);
		clear_list_env(&shell.head_ex);
		clear_mini_env(&shell.mini_env);
		free(shell.minishell_exec);
		free(cmd.path);
		return (EXIT_FAILURE);
	}
	
	printf("printf printa gdje \n");
	clear_list_env(&shell.head_env);
	clear_list_env(&shell.head_ex);
	clear_mini_env(&shell.mini_env);
	free(cmd.path);
	free(shell.minishell_exec);
	return (0);
} 
