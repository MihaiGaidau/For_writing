/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:43:34 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/12 19:08:26 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_flags(char **pcur)
{
	ft_bzero(g_fmt.flags, 5);
	while (TRUE)
	{
		if (**pcur == '-')
			g_fmt.flags[0] = '-';
		else if (**pcur == '+')
			g_fmt.flags[1] = '+';
		else if (**pcur == ' ')
			g_fmt.flags[2] = ' ';
		else if (**pcur == '0')
			g_fmt.flags[3] = '0';
		else if (**pcur == '#')
			g_fmt.flags[4] = '#';
		else
			break ;
		++*pcur;
	}
	return (**pcur);
}
