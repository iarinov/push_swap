/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:39:07 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/13 14:32:46 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_functions.h"

void	add_to_list(t_core *core, char **split, int j)
{
	core->n[core->size] = ft_atoi(split[j]);
	append(&(core->a), core->n[core->size]);
	core->size++;
}

int	error_check(char **split, int j)
{
	if ((ft_atoi(split[j]) == -1 && ft_strlen(split[j]) > 2) \
		|| digits(split[j]) == 0)
	{
		ft_free_split(split);
		return (0);
	}
	return (1);
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
	split = NULL;
}
