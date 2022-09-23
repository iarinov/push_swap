/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:33:14 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/11 13:02:03 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include "list_method.h"
# include <stdlib.h>
# include "del_list_elem.h"

void	swap_first_elements(t_list *list);

void	rotate(t_list **list);

void	reverse(t_list **list);

void	pb(t_list **list_a, t_list **list_b);

void	pa(t_list **list_a, t_list **list_b);

#endif
