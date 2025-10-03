/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:27:19 by glucken           #+#    #+#             */
/*   Updated: 2025/10/03 15:07:24 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int parseur(unsigned char *str, va_list *args)
{

    int i;
    int size;

    i = 0;
    size = 0;
    while (str[i] != 0)
    {
        if (str[i] == '%')
        {
            if (str[i + 1] != 0 && is_in(str[i + 1], "cdisuxX%%# -"))
            {
                size+= ft_printnext(str + i + 1, args);
                i = i + 2;
            }

        }
        else
        {
            size+= ft_putchar(str[i]);
            i++;
        }

    }
    return(size);
}
