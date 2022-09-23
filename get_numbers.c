/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:41:21 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/11 12:48:12 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_numbers.h"

int	get_num(t_list **list, int index)
{
	t_list	*tmp;
	int		i;

	i = 0;
	if (!list)
		return (0);
	tmp = *list;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (0);
	return (tmp->num);
}

int	get_min_from_list(t_list **list)
{
	int		int_min;
	t_list	*tmp;

	tmp = *list;
	if (!list)
		return (0);
	int_min = tmp->num;
	while (tmp != NULL)
	{
		if (int_min > tmp->num)
			int_min = tmp->num;
		tmp = tmp->next;
	}
	return (int_min);
}

int	get_max_from_list(t_list **list)
{
	int		int_max;
	t_list	*tmp;

	tmp = *list;
	if (!list)
		return (0);
	int_max = tmp->num;
	while (tmp != NULL)
	{
		if (int_max < tmp->num)
			int_max = tmp->num;
		tmp = tmp->next;
	}
	return (int_max);
}
