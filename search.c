/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:52:49 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/14 14:37:27 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_search_s(va_arg(arg, char *))
{
    int		count;
	char	*str;

	str = (char *)va_arg(arg, char *);
	count = ft_putstr(str);
	return (count);
}

int	ft_search_d(va_list arg)
{
	int	count;
	int	nb;

	nb = (int)va_arg(arg, int);
	count = ft_putnbr(nb);
	return (count);
}

int	ft_search_c(va_list arg)
{
	int		count;
	char	c;

	c = (char)va_arg(arg, char);
	count = ft_putchar(c);
	reurn (count);	
}

int	ft_search_u(va_list arg)
{
	int	count;
	unsigned int	n;

	n = (unsigned int)va_arg(arg, unsigned int);
	count = ft_putnbr_u(n);
	return (count);
}
