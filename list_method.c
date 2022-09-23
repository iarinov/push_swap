/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_method.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:43:20 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/11 12:48:20 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_method.h"

t_list	*new_elem(int n)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->num = n;
	head->next = NULL;
	return (head);
}

int	list_count(t_list **list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *list;
	if (temp == NULL)
		return (0);
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	append(t_list **list, int data)
{
	t_list	*temp;

	temp = *list;
	if (*list == NULL)
	{
		*list = new_elem(data);
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_elem(data);
}

void	push(t_list **list, int data)
{
	t_list	*temp;

	temp = new_elem(data);
	if (list != NULL)
		temp->next = *list;
	*list = temp;
}

void	list_print(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp != NULL)
	{
		ft_printf("%d\n", temp->num);
		temp = temp->next;
	}
}
