/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 18:14:09 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/21 18:14:12 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_skip_nbr(char **pcur)
{
	while (**pcur && ft_isspace(**pcur))
		++*pcur;
	if (**pcur == '+' || **pcur == '-')
		++*pcur;
	while (**pcur && ft_isdigit(**pcur))
		++*pcur;
}
