/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:31:36 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/13 14:38:21 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pre_sorting.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sort_stack(t_core *core)
{
	int	i;

	i = 1;
	while (i < core->size)
	{
		if (core->n[i] < core->n[i - 1])
		{
			ft_swap(&core->n[i], &core->n[i - 1]);
			i = 0;
		}
		i++;
	}
}
