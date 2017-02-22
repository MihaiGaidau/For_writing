/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:07:59 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/12 18:08:36 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_len(char **pcur)
{
	ft_bzero(g_fmt.len, 5);
	while (TRUE)
	{
		if (**pcur == 'h')
			++g_fmt.len[0];
		else if (**pcur == 'l')
			++g_fmt.len[1];
		else if (**pcur == 'L')
			g_fmt.len[2] = 1;
		else if (**pcur == 'j')
			g_fmt.len[3] = 1;
		else if (**pcur == 'z')
			g_fmt.len[4] = 1;
		else
			break ;
		++*pcur;
	}
	return (**pcur);
}
