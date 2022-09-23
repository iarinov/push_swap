/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:49:10 by aiarinov          #+#    #+#             */
/*   Updated: 2022/07/13 14:34:55 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "sort_stack.h"
# include "pre_sorting.h"
# include "checker_functions.h"

int	spaces(char *argv);
int	digits(char *argv);
int	repeat_numbers(t_core *core, int argc);
int	checker(char **argv, int argc, t_core *core);

#endif
