/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:46:37 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/13 14:33:08 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_FUNCTIONS_H
# define CHECKER_FUNCTIONS_H

# include "sort_stack.h"
# include "checker.h"
# include "list_method.h"
# include <stdlib.h>

// typedef struct core
// {
// 	t_list	*a;
// 	t_list	*b;
// 	int		max;
// 	int		min;
// 	int		*n;
// 	int		size;
// }	t_core;

void	ft_free_split(char **split);
void	add_to_list(t_core *core, char **split, int j);
int		error_check(char **split, int j);

#endif
