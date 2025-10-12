/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@ent.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:37:54 by glucken           #+#    #+#             */
/*   Updated: 2025/10/12 13:10:25 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printarg(const char c, va_list *args, int flag);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_hexa(unsigned int x, int lower, int size, int flag);
int	ft_putnbr_hexalong(long long unsigned int x, int lower, int size);
int	ft_putnbr_u(unsigned int n, int size);
int	ft_putnbr(int n, int size, int flag);
int	ft_putptr(long long unsigned int ptr);
int	is_in(char c, char *set);
int	parseur(const char *str, va_list *args);

#endif
