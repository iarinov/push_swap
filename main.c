/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:51:19 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/13 14:15:30 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_stack.h"
#include "checker.h"
#include "checker.h"

int	main(int argc, char **argv)
{
	t_core	core;

	core.a = NULL;
	core.b = NULL;
	core.n = malloc(4 * 1024);
	core.size = 0;
	if (argc >= 2)
	{
		if (checker(argv, argc, &core) == 1)
		{
			if (repeat_numbers(&core, argc) == 0)
			{
				ft_printf("Error\n");
				free(core.n);
				exit(1);
			}
			sort_manager(&core);
		}
		else
			ft_printf("Error\n");
	}
	free(core.n);
	return (0);
}
