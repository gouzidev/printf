/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:58:15 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/21 09:58:17 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:24:42 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/21 09:58:09 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_print_rec(unsigned long n, char *base, int *i)
{
	if (n > 0)
	{
		ft_print_rec(n / ft_strlen(base), base, i);
		ft_putchar(base[n % ft_strlen(base)], i);
	}
}

void	ft_putint(int n, int *i)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", i);
	else
	{
		if (n == 0)
			ft_putchar((n % 10) + '0', i);
		if (n < 0)
		{
			ft_putchar('-', i);
			n = -n;
		}
		if (n > 0)
			ft_print_rec(n, "0123456789", i);
	}
}

void	ft_putunsigned(unsigned int n, int *i)
{
	if (n == 0)
		ft_putchar('0', i);
	if (n > 0)
		ft_print_rec(n, "0123456789", i);
}
