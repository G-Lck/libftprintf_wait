/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:37:54 by glucken           #+#    #+#             */
/*   Updated: 2025/10/02 20:58:24 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void    ft_putstr(char* s);
void    ft_putchar(char c);
int     ft_printf(unsigned char* str, ...);
int     parseur(unsigned char *str, ...);
int		main(void);

#endif
