/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:37:54 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 17:47:16 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int     ft_printarg(char c, va_list *args);
int     ft_printf(const char* str, ...);
int     ft_printflag(char c);
int     ft_printnext(const char* str, va_list *args);
int     ft_putchar(char c);
int     ft_putstr(char* s);
int     ft_putnbr_hexa(int x, int lower, int size);
int     ft_putnbr_hexalong(long int x, int lower, int size);
int     ft_putnbr_u(unsigned int n, int size);
int 	ft_putnbr(int n, int size);
int     ft_putptr(long int ptr);
int     is_in(char c, char* set);
int     parseur(const char *str, va_list *args);

#endif
