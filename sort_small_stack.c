/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:04:25 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/12 16:44:55 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_stack.h"

void	sort_3_stack(t_core *core)
{
	int	min;
	int	max;

	min = get_min_from_list(&core->a);
	max = get_max_from_list(&core->a);
	if (get_num(&core->a, 1) == min && get_num(&core->a, 2) == max)
		swap_first_elements(core->a);
	else if (get_num(&core->a, 0) == max && get_num(&core->a, 2) == min)
	{
		swap_first_elements(core->a);
		reverse(&(core->a));
	}
	else if (get_num(&core->a, 0) == max && get_num(&core->a, 1) == min)
		rotate(&(core->a));
	else if (get_num(&core->a, 0) == min && get_num(&core->a, 1) == max)
	{
		swap_first_elements(core->a);
		rotate(&(core->a));
	}
	else if (get_num(&core->a, 1) == max && get_num(&core->a, 2) == min)
		reverse(&(core->a));
}

void	move_min_5(t_core *core)
{
	int	min;
	int	max;

	min = get_min_from_list(&core->a);
	max = get_max_from_list(&core->a);
	if (core->min != get_num(&core->a, 0))
	{
		if (core->size == 5)
		{
			if (min == get_num(&core->a, 4))
				reverse(&(core->a));
			else if (min == get_num(&core->a, 1))
				swap_first_elements(core->a);
			else if (min == get_num(&core->a, 3) || min == get_num(&core->a, 2))
			{
				if (min == get_num(&core->a, 3))
					rotate(&(core->a));
				rotate(&(core->a));
				swap_first_elements(core->a);
			}
		}
	}
	pb(&core->a, &core->b);
}

void	move_min_4(t_core *core)
{
	int	min;
	int	max;

	min = get_min_from_list(&core->a);
	max = get_max_from_list(&core->a);
	if (core->min != get_num(&core->a, 0))
	{
		if (core->size == 4)
		{
			if (min == get_num(&core->a, 3))
				reverse(&(core->a));
			else if (min == get_num(&core->a, 1))
				swap_first_elements(core->a);
			else if (min == get_num(&core->a, 2))
			{
				rotate(&(core->a));
				swap_first_elements(core->a);
			}
		}
	}
	pb(&core->a, &core->b);
}

void	sort_small(t_core *core)
{
	if (core->size == 2)
		swap_first_elements(core->a);
	else if (core->size == 3)
		sort_3_stack(core);
	else if (core->size == 4)
	{
		move_min_4(core);
		sort_3_stack(core);
		pa(&core->a, &core->b);
	}
	else if (core->size == 5)
	{
		move_min_5(core);
		move_min_5(core);
		sort_3_stack(core);
		pa(&core->a, &core->b);
		pa(&core->a, &core->b);
	}
}
