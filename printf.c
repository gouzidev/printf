/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:58:34 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/21 09:58:38 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	c_in_str(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void handle_width(char **s, va_list v, int *i)
{
	int	l;
	int	w;
	w = ft_atoi(s);

	if (**s == 'd')
	{
		  
		width_handler_int(va_arg(v, int), (char **)s, i);
	
	}	if (**s == 's')
		width_handler_str(va_arg(v, char *), (char **)s, i);
}

void	handler(va_list v, int *i, const char **s)
{
	if (*s && **s == '%')
	{
		if (c_in_str(*(*s + 1), "cidsupxX%"))
		{
			(*s)++;
			if (**s == 'c')
				ft_putchar(va_arg(v, int), i);
			if (**s == 's')
				ft_putstr(va_arg(v, char *), i);
			if (**s == 'd' || **s == 'i')
				ft_putint(va_arg(v, int), i);
			if (**s == 'u')
				ft_putunsigned(va_arg(v, unsigned int), i);
			if (**s == '%')
				ft_putchar('%', i);
			if (**s == 'p')
				ft_putaddr(va_arg(v, void *), i);
			if (**s == 'x' || **s == 'X')
				ft_puthex(va_arg(v, unsigned int), **s, i);
		}
		else if (*s && **s)
		{
			if (ft_isdigit(*(*s + 1)))
			{
				(*s)++;
				handle_width((char **)s, v, i);
			}
		}
	}
	else
		ft_putchar(**s, i);
}

int	ft_printf(const char *s, ...)
{
	va_list	v;
	int		i;

	va_start(v, s);
	i = 0;
	while (*s)
	{
		handler(v, &i, &s);
		s++;
	}
	va_end(v);
	return (i);
}
