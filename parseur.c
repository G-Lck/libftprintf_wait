/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:27:19 by glucken           #+#    #+#             */
/*   Updated: 2025/10/02 21:03:05 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int parseur(unsigned char *str, va_list args)
{
    va_list args;
    va_start(args, str);
    int i;
    int size;

    i = 0;
    size = 0;
    while (str[i] != 0)
    {
        if (str[i] == '%')
        {
            if (str[i + 1] != 0 && str[i + 1] == 's')
            {
                ft_putstr(va_arg(args, char*));
                i+=2;
            }

        }
        size++;
        i++;
    }
    va_end(args);
    return(size);
}
