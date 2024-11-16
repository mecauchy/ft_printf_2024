/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:17:10 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/16 15:00:50 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{	
	void	*ptr;
	void	*p;
	ptr = 0;
	p = "16";
	printf("la fonction printf	: %p", ptr);
	printf("%c", '\n');
	ft_printf("mon printf		: %p", ptr);
	return (0);
}