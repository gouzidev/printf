/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:58:00 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/22 10:26:15 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		len(char *s);
void	ft_print_rec(unsigned long n, char *base, int *i);
void	ft_putint(int n, int *i);
void	ft_putunsigned(unsigned int n, int *i);

void	ft_putchar(char c, int *i);
void	ft_putstr(char *s, int *i);
void	ft_putaddr(void *p, int *i);
void	ft_puthex(unsigned int n, char x, int *i);

int		c_in_str(char c, char *s);
void	handler(va_list v, int *i, const char **s);
int		ft_printf(const char *s, ...);

#endif
