/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_one_command.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:00:22 by fseles            #+#    #+#             */
/*   Updated: 2023/12/11 12:00:24 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishel.h"

int one_command_exec(t_cmd *cmd)
{
	int builtin_cmd;

	builtin_cmd = is_cmd_builtin(cmd);
	if(builtin_cmd > 0)
	{
		//builtin_exec;
	}

}