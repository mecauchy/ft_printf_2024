/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:46:27 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/13 13:46:32 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i  = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_putnbr(int nb)
{
    int count;

    count = 0;
    if (nb == -2147483648)
        ft_putstr("-2147483648");
    else if (nb < 0)
        nb = -nb;
        ft_putchar('-');
    else if (nb > 0)
        nb = ft_putnbr(nb / 10);
        nb = ft_putnbr(nb % 10);
    else
        ft_putchar(nb + '0');
    return (count);
}