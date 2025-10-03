/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:37:54 by glucken           #+#    #+#             */
/*   Updated: 2025/10/03 14:59:31 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int     ft_printarg(char c, va_list *args);
int     ft_printf(unsigned char* str, ...);
int     ft_printflag(char c);
int     ft_printnext(unsigned char* str, va_list *args);
int     ft_putchar(char c);
int     ft_putstr(char* s);
int     ft_putnbr_hexa(int x, int lower, int size);
int     ft_putnbr_u(unsigned int n, int size);
int 	ft_putnbr(int n, int size);
int     is_in(char c, char* set);
int     parseur(unsigned char *str, va_list *args);
int		main(void);

#endif
