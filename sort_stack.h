/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:11:18 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/13 14:38:02 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_STACK_H
# define SORT_STACK_H

# include "instructions.h"
# include "get_numbers.h"
# include "del_list_elem.h"

typedef struct core
{
	t_list	*a;
	t_list	*b;
	int		max;
	int		min;
	int		*n;
	int		size;
}	t_core;

void	sort_manager(t_core *core);
void	sort_small(t_core *core);
void	move_min(t_core *core);
int		is_sorted(t_core *core);

#endif
