/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:44:21 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/12 19:07:44 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_width(char **pcur, va_list *parg)
{
	g_fmt.width = 0;
	if (**pcur == '*')
	{
		g_fmt.width = va_arg(*parg, uint);
		++*pcur;
	}
	if (ft_isdigit(**pcur))
	{
		g_fmt.width = ft_atoi(*pcur);
		ft_skip_nbr(pcur);
	}
	return (**pcur);
}
