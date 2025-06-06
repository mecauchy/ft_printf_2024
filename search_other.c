/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_other.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:45:40 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/16 15:06:26 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_p(va_list arg)
{
	int				count;
	unsigned long	p;

	count = 0;
	p = (unsigned long)va_arg(arg, unsigned long);
	if (p)
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hex_p(p);
	}
	else if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	return (count);
}

int	ft_search_x(va_list arg)
{
	int				count;
	unsigned int	nb;

	nb = (unsigned int)va_arg(arg, unsigned int);
	count = ft_putnbr_hex_x(nb);
	return (count);
}

int	ft_search_xx(va_list arg)
{
	int				count;
	unsigned int	nb;

	nb = (unsigned int)va_arg(arg, unsigned int);
	count = ft_putnbr_hex_xx(nb);
	return (count);
}
