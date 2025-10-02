/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:57:35 by glucken           #+#    #+#             */
/*   Updated: 2025/10/02 16:43:57 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int ft_printf(unsigned char* str, ...)
{
    va_list args;
    va_start(args, str);
    printf("%s ", va_arg(args, char*));
    printf("%s ", va_arg(args, char*));
    va_end(args);
    return(1);
}

int main()
{
    ft_printf((unsigned char* )"salut", "toi", "et");
}