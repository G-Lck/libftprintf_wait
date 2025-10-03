/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:49:20 by glucken           #+#    #+#             */
/*   Updated: 2025/10/03 15:14:50 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int    ft_printhexabase(int n, int lower)
{
    char    *lower_base;
    char    *upper_base;

    lower_base = "0123456789abcdef";
    upper_base = "0123456789ABCDEF";

    if (lower)
    	ft_putchar(lower_base[n]);
    else
	{
    	ft_putchar(upper_base[n]);
	}
	return (1);
}

int	ft_putnbr_hexa(int x, int lower, int size)
{
	if (x == 0)
	{
		size+= ft_putchar('0');
		return (size) ;
	}
	if (x >= 16)
		size+= ft_putnbr_hexa(x / 16, lower, size);
	size+= ft_printhexabase(x % 16, lower);
	return (size);
}