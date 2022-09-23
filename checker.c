/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:20:26 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/13 14:17:45 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	spaces(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	digits(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i] != '\0')
	{
		if ((ft_isdigit(argv[i]) == 0 && argv[i] != ' ') \
			|| (argv[0] == '-' && ft_isdigit(argv[1]) == 0))
			return (0);
		i++;
	}
	return (1);
}

int	repeat_numbers(t_core *core, int argc)
{
	int	i;

	i = 1;
	sort_stack(core);
	while (i < argc)
	{
		if (core->n[i] == core->n[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	checker(char **argv, int argc, t_core *core)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < argc && argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			exit(1);
		j = 0;
		while (split[j])
		{
			if (error_check(split, j) == 0)
				return (0);
			add_to_list(core, split, j);
			j++;
		}
		ft_free_split(split);
		i++;
	}
	return (1);
}
