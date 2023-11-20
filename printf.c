#include "ft_printf.h"

int	c_in_str(char c, char *s)
{
	printf("FORMAT\n");
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

int	ft_printf(const char *s, ...)
{
	va_list v;

	va_start(v, s);
	int i;

	i = 0;
	while (*s)
	{
		if (*s >= 9 && *s <= 13)
			handle_unprintables(*s, &i);
		else if (*s != '%')
			ft_putchar(*s, &i);
		else if (*s == '%' && c_in_str(*(s + 1), "cisupxX%"))
		{
			s++;
			if (*s == 'c')
				ft_putchar(va_arg(v, int), &i);
			if (*s == 's')
				ft_putstr(va_arg(v, char *), &i);
			if (*s == 'i' || *s == 'd')
				ft_putint(va_arg(v, int), &i);
			if (*s == 'u')
				ft_putunsigned(va_arg(v, unsigned int), &i);
			if (*s == '%')
				ft_putchar('%', &i);
			if (*s == 'p')
				ft_putaddr(va_arg(v, void *), &i);
			if (*s == 'x' || *s == 'X')
				ft_puthex(va_arg(v, unsigned int), *s, &i);
		} 
		else
			i++;
		s++;
	}
	va_end(v);
	return (i);
}