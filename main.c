/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:57:35 by glucken           #+#    #+#             */
/*   Updated: 2025/10/02 20:59:08 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int main()
{
    int res;

    res = ft_printf((unsigned char* )"%x", 17000);
    printf("\nWith the value: %d\n", res);
}
