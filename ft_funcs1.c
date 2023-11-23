/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:20:50 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/22 10:26:48 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(char *s)
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
		ft_print_rec(n / len(base), base, i);
		ft_putchar(base[n % len(base)], i);
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
