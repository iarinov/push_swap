/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:58:26 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/11 17:27:26 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "del_list_elem.h"

void	ft_del_last(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next->next = 0;
	free(tmp->next);
	tmp->next = NULL;
}

void	ft_del_firs(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp == NULL)
		return ;
	tmp = tmp->next;
	free(*list);
	*list = tmp;
}
