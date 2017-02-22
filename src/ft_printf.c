/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:20:05 by sgirlea           #+#    #+#             */
/*   Updated: 2017/01/31 18:21:34 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	char	*cur;
	va_list	arg;
	int		ret;

	ret = 0;
	cur = format;
	g_stop = 0;
	va_start(arg, format);
	while (*cur)
	{
		g_free = 1;
		g_size = 0;
		g_s = NULL;
		g_n = 0;
		if (!ft_find_fspec(&cur, &ret) ||
			!ft_get_flags(&cur) ||
			!ft_get_width(&cur, &arg) ||
			!ft_get_prec(&cur, &arg) ||
			!ft_get_len(&cur))
			break ;
		ret += ft_format(*cur, &arg);
		++cur;
	}
	va_end(arg);
	return (ret);
}
