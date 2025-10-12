/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:35:43 by glucken           #+#    #+#             */
/*   Updated: 2025/10/12 13:09:48 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	size;

	if (!s)
		return (ft_putstr("(null)"));
	size = 0;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
		size++;
	}
	return (size);
}
