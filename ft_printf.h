/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:58:00 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/21 09:58:01 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	handler(va_list v, int *i, const char **s);
void	ft_putchar(char c, int *i);
int     ft_strlen(char *s);
int	    ft_atoi(char **str);
void	ft_putint(int n, int *i);
void	ft_putunsigned(unsigned int n, int *i);
void	ft_print_rec(unsigned long n, char *base, int *i);
void	ft_putstr(char *s, int *i);
void	ft_putaddr(void *p, int *i);
void	ft_puthex(unsigned int n, char x, int *i);
void	handle_unprintables(char c, int *i);
void    handle_width(char **s, va_list v, int *i, char pad);
int     ft_isdigit(int c);
void	width_handler_int(int n, int *i, int w, char p);
int	    ft_strlen(char *s);
void	width_handler_str(char *str, int *i, int w, char p);
#endif