/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 19:14:51 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/18 19:14:53 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_width(int len)
{
	char	*new_str;
	uint	delta;

	delta = g_fmt.width - len;
	new_str = (char *)malloc(sizeof(char) * (delta + 1));
	new_str[delta] = '\0';
	ft_memset(new_str, (g_fmt.flags[3] && !g_fmt.flags[0] ? '0' : ' '), delta);
	if (g_fmt.flags[0])
		ft_join_gs(g_s, new_str);
	else
	{
		ft_join_gs(new_str, g_s);
		if (g_fmt.flags[3] && !g_fmt.flags[0] && !g_fmt.flags[4] &&
			g_fmt.prec > 0 && g_fmt.width > g_fmt.prec)
		{
			delta = g_fmt.width - g_fmt.prec;
			if (g_fmt.prec > 0 && g_fmt.prec < len)
				delta -= len - g_fmt.prec;
			ft_memset(g_s, ' ', delta);
		}
	}
	free(new_str);
}
