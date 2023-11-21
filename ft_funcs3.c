#include "ft_printf.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:17:43 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/10 21:58:10 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	fill_rec(int n, char *buff, int *i)
{
	if (n > 0)
	{
		fill_rec(n / 10, buff, i);
		buff[*i] = (n % 10) + 48;
		*i = *i + 1;
	}
}

static int	ft_handle(int i, char *buff, int n)
{
	char	*max;

	max = "-2147483648";
	if (n == -2147483648)
	{
		while (max[i])
		{
			buff[i] = max[i];
			i++;
		}
		return (1);
	}
	if (n == 0)
	{
		buff[0] = '0';
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*buff;
	int		digit_len;
	int		i;

	digit_len = count_digits(n);
	buff = malloc((digit_len + 1) * sizeof(char));
	if (buff == 0)
		return (0);
	buff[digit_len] = '\0';
	i = 0;
	if (ft_handle(i, buff, n) == 1)
		return (buff);
	if (n < 0)
	{
		buff[i] = '-';
		i++;
		n = -n;
	}
	if (n > 0)
		fill_rec(n, buff, &i);
	return (buff);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char **str)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + (**str - 48);
		(*str)++;
	}
	return (res * sign);
}

void	print_pad(int w, char pad, int *i)
{
	int	x;

	x = 0;
	while (x++ < w)
		ft_putchar(pad, i);
}

int	get_int_len(int n, int b)
{
	long nb;
	int	i;

	i = 0;
	nb = n;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		nb = nb / b;
		i++;
	}
	return (i);
}

void	width_handler_int(int n, int *i, int w, char pad)
{
	int	l;
	long nb;

	nb = n;


	l = get_int_len(n, 10);
	print_pad(w - l, pad, i);
	ft_putint(nb, i);
}

void	width_handler_str(char *str, int *i, int w, char pad)
{
	int	l;
	l = ft_strlen(str);
	print_pad(w - l, pad, i);
	ft_putstr(str, i);
}
