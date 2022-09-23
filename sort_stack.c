/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:44:53 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/13 14:37:41 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_stack.h"

int	is_sorted(t_core *core)
{
	int	i;

	i = 0;
	while (i < core->size)
	{
		if (get_num(&core->a, i) != core->n[i])
			return (0);
		i++;
	}
	return (1);
}

int	order(t_core *core, int value)
{
	int	i;

	i = 0;
	while (i < core->size)
	{
		if (core->n[i] == value)
			return (i);
		i++;
	}
	return (0);
}

void	sort_binary(t_core *core)
{
	int	j;
	int	i;
	int	num;
	int	max_num;
	int	max_bits;

	i = 0;
	max_num = core->n[core->size - 1];
	max_bits = 0;
	while (!is_sorted(core))
	{
		j = 0;
		while (j < core->size && core->a != NULL)
		{
			num = order(core, core->a->num);
			if (((num >> i) & 1) == 1)
				rotate(&core->a);
			else
				pb(&core->a, &core->b);
			++j;
		}
		while (core->b != NULL)
			pa(&core->a, &core->b);
		i++;
	}
}

void	sort_manager(t_core *core)
{
	if (is_sorted(core) == 1)
	{
		free(core->n);
		exit(1);
	}
	core->max = get_max_from_list(&core->a);
	core->min = get_min_from_list(&core->a);
	if (core->size < 6)
		sort_small(core);
	else if (core->size > 5)
		sort_binary(core);
}
