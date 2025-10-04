/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:57:35 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 17:46:19 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int ft_printf(const char* str, ...)
{
    va_list args;
    int size;
    va_start(args, str);
    size = 0;
    size+= parseur(str, &args);
    va_end(args);
    return(size);
}

