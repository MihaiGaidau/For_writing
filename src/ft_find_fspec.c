/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_fspec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 12:14:46 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/19 12:14:48 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_find_fspec(char **pcur, int *pret)
{
	while (**pcur && **pcur != '%')
	{
		if (!g_stop)
			ft_putchar(**pcur);
		++*pret;
		++*pcur;
	}
	if (**pcur)
		++*pcur;
	return (**pcur);
}
