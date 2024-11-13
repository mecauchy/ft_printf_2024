/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:23:11 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/12 18:58:59 by mcauchy-         ###   ########.fr       */
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
		if (format[i] == '%' && format[i + 1] == ft_strchr("cspdiuxX"))
			res += printf_exec(arg, (char *)format + i + 1);
		else if (format[i] && format[i + 1] != '%')
			res += ft_putchar(format);
		i++;
	}
	va_end(arg);
	return (res);
}