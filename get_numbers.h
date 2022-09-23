/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:42:00 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/10 17:45:39 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NUMBERS_H
# define GET_NUMBERS_H

# include "list_method.h"

int	get_num(t_list **list, int index);

int	get_min_from_list(t_list **list);

int	get_max_from_list(t_list **list);

#endif
