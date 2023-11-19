/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:24:42 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/05 23:07:13 by sgouzi           ###   ########.fr       */
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

void	ft_print_rec(unsigned long n, char *base)
{
	if (n > 0)
	{
		ft_print_rec(n / len(base), base);
		ft_putchar(base[n % len(base)]);
	}
}

void	ft_putint(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n == 0)
			ft_putchar((n % 10) + '0');
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > 0)
			ft_print_rec(n, "0123456789");
	}
}

void	ft_putunsigned(unsigned int n)
{
	
	if (n == 0)
		ft_putchar('0');
	if (n > 0)
		ft_print_rec(n, "0123456789");
}


void	ft_putaddr(void *p)
{
	unsigned long addr = (unsigned long)p;
	char base[] = "0123456789abcdef";
	if (p == NULL)
	{
		ft_putstr("(nil)");
		return ;
	}
	ft_putstr("0x");
	if (addr == 0)
		ft_putchar(base[addr % 16]);
	if (addr > 0)
		ft_print_rec(addr, base);
}

void	ft_puthex(unsigned int n, char x)
{
	
	if (n == 0)
		ft_putchar('0');
	if (n > 0)
	{
		if (x == 'x')
			ft_print_rec(n, "0123456789abcdef");
		else
			ft_print_rec(n, "0123456789ABCDEF");
	}
}