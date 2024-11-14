/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_other.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:45:40 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/14 14:23:57 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_search_p(va_list arg)
{
	int		count;
	void	*p;

	p = (void *)va_arg(arg, void *);
	count += ft_putstr("0x");
	count += putnbr_hexa_p(p);
	return (count);
}

int	ft_search_x(va_list arg)
{
	int	count;
	unsigned int	nb;

	nb = (unsigned int)va_arg(arg, unsigned int);
	count = putnbr_hex_x(nb);
	return (count);
}
int	ft_search_X(va_list arg)
{
	int	count;
	unsigned int	nb;

	nb = (unsigned int)va_arg(arg, unsigned int);
	count = putnbr_hex_X(nb);
	return (count);
}