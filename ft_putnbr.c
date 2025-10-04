/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:49:20 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 19:03:33 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int	ft_putnbr(int n, int size)
{

	if (n == 0)
	{
		size+= ft_putchar('0');
		return (size) ;
	}
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11) ;
	}
	if (n < 0)
	{
		size+= ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		size = ft_putnbr(n / 10, size);
	size+= ft_putchar('0' + n % 10);
	return (size);
}
