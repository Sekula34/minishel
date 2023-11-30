/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   envexport.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:05:37 by fseles            #+#    #+#             */
/*   Updated: 2023/11/29 15:05:39 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVEXPORT_H
# define ENVEXPORT_H
# include "data_types.h"

void	add_element_back(t_vars **head, t_vars *new_element);
t_vars	*create_element(char *str);
void	clear_list_env(t_vars **head);
void	delete_element(t_vars **element_to_delete);
char	*get_key(char *string);
char	*get_value(char *string);

#endif
