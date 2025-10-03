/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:57:35 by glucken           #+#    #+#             */
/*   Updated: 2025/10/02 21:03:17 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int ft_printf(unsigned char* str, ...)
{
    va_list args;
    va_start(args, str);
    parseur(str, args);
    va_end(args);
    return(1);
}

