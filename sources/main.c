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
//	char *command[] = {"wc", "-l", NULL}; // Replace "file.txt" with the name of the file you want to count lines for

	t_shell shell;
	t_cmd cd;
	// cd.args= (char *[]){"~", NULL};
	cd.args= (char *[]){"/nfs/homes/fseles/eval",NULL};
	cd.cmd ="ls";


	if(shell_init(&shell, envp) == 1)
	{
		clear_list_env(&shell.head_env);
		clear_list_env(&shell.head_ex);
		free(shell.minishell_exec);
		return (EXIT_FAILURE);

	}
	if(set_cmd_path(&cd, &shell) == 0)
		printf("command path is :%s\n", cd.path);
	// printf("Minishell path is %s\n", shell.minishell_exec);
	// char **mini_arr;
	// mini_arr = NULL;
	// if(set_mini_env(&mini_arr, shell.head_env)==1)
	// {
	// 	clear_list_env(&shell.head_env);
	// 	clear_list_env(&shell.head_ex);
	// 	free(shell.minishell_exec);
	// 	return (EXIT_FAILURE);
	// }

	// printf("A jesi lud\n");
	// char *linija;
	// linija = readline("promopt : ");
	// rl_on_new_line_with_prompt();
	// if(*linija == '1')
	// 	execute_minishell(&shell);
	// free(linija);
	// int i = 0;
	// while(mini_arr[i] != NULL)
	// {
	// 	printf("Line %d is : %s\n",i, mini_arr[i]);
	// 	i++;
	// }
	// one_command_exec(&cd, &shell);
	// pwd(&shell.head_ex, &shell.head_env);
	// //int status = env_exec(&shell, &cd);
	// int status = 0;

	// unset_exec(&shell, &cd);
	//env(shell.head_env);
	//status = cd_exec(&shell, &cd);
	//status = pwd_exec(&shell, &cd);
	//pwd(&shell.head_ex, &shell.head_env);
	//export(NULL, &shell.head_ex, &shell.head_env);
	clear_list_env(&shell.head_env);
	clear_list_env(&shell.head_ex);
	free(cd.path);
	//clear_mini_env(&mini_arr);
	free(shell.minishell_exec);
	return (0);
} 
