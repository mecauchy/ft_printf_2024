/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:07:29 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/14 14:06:26 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_u(n / 10);
		count += ft_putnbr_u(n % 10);
	}
	if (n < 10)
	{
		count += ft_putchar(n);
	}
	return (count);
}

int ft_putnbr(int nb)
{
    int count;

    count = 0;
    if (nb == -2147483648)
	{
        ft_putstr("-2147483648");
		return (12);
	}
	if (nb < 0)
	{
        nb = -nb;
        ft_putchar('-');
	}
	if (nb > 0)
	{
        nb = ft_putnbr(nb / 10);
        nb = ft_putnbr(nb % 10);
	}
	else
        ft_putchar(nb + '0');
    return (count);
}