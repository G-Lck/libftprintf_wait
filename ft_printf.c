/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:57:35 by glucken           #+#    #+#             */
/*   Updated: 2025/10/12 13:08:59 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		size;

	va_start(args, str);
	size = parseur(str, &args);
	va_end(args);
	return (size);
}
