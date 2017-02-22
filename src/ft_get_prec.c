/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:08:45 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/12 18:09:13 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_prec(char **pcur, va_list *parg)
{
	g_fmt.prec = -1;
	if (**pcur == '.')
	{
		while (**pcur && **pcur == '.')
			++*pcur;
		while (**pcur && ft_isspace(**pcur))
			++*pcur;
		if (**pcur == '*')
		{
			g_fmt.prec = va_arg(*parg, long);
			while (**pcur && **pcur == '*')
				++*pcur;
		}
		else
		{
			g_fmt.prec = ft_atoi(*pcur);
			ft_skip_nbr(pcur);
		}
	}
	return (**pcur);
}
