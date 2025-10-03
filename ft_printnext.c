/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:27:19 by glucken           #+#    #+#             */
/*   Updated: 2025/10/03 14:07:21 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int ft_printnext(unsigned char* str, va_list *args)
{
    int size;
    int i;
    
    i = 0;
    size = 0;
    if (is_in(str[i], "# -"))
        size+= ft_putchar('#');
    else
        size+= ft_printarg(str[i], args);
    return (size);
}