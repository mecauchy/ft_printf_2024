/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:23:11 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/14 13:09:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	unsigned int	i;
	int		res;

	va_start(arg, format);
	while (format[i] && format[i + 1])
	{
		if (format[i] == '%' && format[i + 1])
			res += ft_print_exec(arg, (char *)format + i + 1);
		else if (format[i] && format[i + 1] != '%')
			res += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (res);
}

int	main(void)
{	
	int	nb;

	nb = 7;
	printf("la fonction printf : %d\n", nb);
	ft_printf("mon printf : %d", nb);
	return (0);
}