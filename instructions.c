/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:30:47 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/12 15:19:12 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

// sa sb ss
void	swap_first_elements(t_list *list)
{
	int	c;

	if (list == NULL || list->next == NULL)
		return ;
	c = list->num;
	list->num = list->next->num;
	list->next->num = c;
	ft_printf("sa\n");
}

// ra rb rr
void	rotate(t_list **list)
{
	t_list	*temp;

	temp = *list;
	if (!*list || !list)
		return ;
	append(&temp, temp->num);
	temp = (temp->next);
	free(*list);
	*list = temp;
	ft_printf("ra\n");
}

// rra rrb rrr
void	reverse(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	temp = new_elem(temp->num);
	push(list, temp->num);
	free(temp);
	ft_del_last(list);
	ft_printf("rra\n");
}

// pb (push to b)
void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	if (!tmp)
		return ;
	push(list_b, tmp->num);
	ft_del_firs(list_a);
	ft_printf("pb\n");
}

// pa (push to a)
void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	if (!list_a || !list_b)
		return ;
	push(list_a, tmp->num);
	ft_del_firs(list_b);
	ft_printf("pa\n");
}
