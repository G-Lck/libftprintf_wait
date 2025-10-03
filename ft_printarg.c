/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:27:19 by glucken           #+#    #+#             */
/*   Updated: 2025/10/03 16:31:24 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int ft_printarg(char c, va_list *args)
{
    int size;
    
    size = 0;
    if (c == '%')
        size+= ft_putchar('%');
    if (c == 'c')
        size+= ft_putchar(va_arg(*args, int));
    if (c == 's')
        size+= ft_putstr(va_arg(*args, char*));
    if (c == 'd')
        size+= ft_putnbr(va_arg(*args, int), 0);
    if (c == 'u')
        size+= ft_putnbr_u(va_arg(*args, unsigned int), 0);
    if (c == 'x')
        size+= ft_putnbr_hexa(va_arg(*args, unsigned int), 1, 0);
    if (c == 'p')
        size+= ft_putptr(va_arg(*args, long int));
    return (size);
}