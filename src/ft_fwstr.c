/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:07:12 by sgirlea           #+#    #+#             */
/*   Updated: 2017/02/12 19:07:14 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define FT_WSTRLEN(WS) (int)ft_strlen((char *)WS)

int	ft_fwstr(va_list *parg)
{
	wchar_t		*ws;

	if ((ws = va_arg(*parg, wchar_t *)))
		return (g_stop ? FT_WSTRLEN(ws) : ft_putwstr(ws));
	return (g_stop ? 6 : (int)ft_strlen("(null)"));
}
