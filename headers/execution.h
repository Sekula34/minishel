/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:12:48 by fseles            #+#    #+#             */
/*   Updated: 2023/12/08 20:12:50 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTION_H
# define EXECUTION_H

# include "data_types.h"

int append_redirect(t_redirect *append, int *fd);
void clear_pipe_array(int ***pipe_arr);
int execute_builtin(int builtin_num, t_shell *shell, t_cmd *cmd);
int get_argc(char **argv);
int heredoc_redirect(t_redirect *here_doc, int file_index, int *fd);
int input_redirect(t_redirect *input, int *fd);
int is_cmd_builtin(t_cmd *cmd);
int make_pipes(int ***pipe_arr, int number_of_pipes);
int output_redirect(t_redirect *output, int *fd);
int redirect_handler(t_redirect *red_list, int *in_fd, int *out_fd);
int set_number_of_commands(int *noc, t_cmd *cmd);

#endif