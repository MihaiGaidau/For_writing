/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgirlea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:20:04 by sgirlea           #+#    #+#             */
/*   Updated: 2017/01/31 18:21:31 by sgirlea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char f, va_list *parg)
{
	if (f == 'o' || f == 'O' || f == 'u' || f == 'U')
		return (ft_fou(f, parg));
	if (f == 'i' || f == 'd' || f == 'D')
		return (ft_fint(f, parg));
	if (f == 'p' || f == 'x' || f == 'X')
		return (ft_fhex(f, parg));
	if (f == '%' || f == 'c')
		return (ft_fchar(f, parg));
	if (f == 's')
		return (ft_fstr(parg));
	if (f == 'C')
		return (ft_fwchar(parg));
	if (f == 'S')
		return (ft_fwstr(parg));
	return (g_stop ? 1 : ft_putchar(f));
}
