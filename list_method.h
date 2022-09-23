/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_method.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:43:50 by annaiarinov       #+#    #+#             */
/*   Updated: 2022/07/10 19:18:16 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_METHOD_H
# define LIST_METHOD_H

# include "./libft/libft.h"
# include "./libftprintf/ft_printf.h"
# include <stdlib.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}	t_list;

t_list	*new_elem(int n);

int		list_count(t_list **list);

void	append(t_list **list, int data);

void	push(t_list **list, int data);

void	list_print(t_list **list);

#endif
