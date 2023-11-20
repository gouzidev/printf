#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printf(const char *s, ...);
void	ft_putchar(char c, int *i);
void	ft_putint(int n, int *i);
void	ft_putunsigned(unsigned int n, int *i);
void	ft_print_rec(unsigned long n, char *base, int *i);
void	ft_putstr(char *s, int *i);
void	ft_putaddr(void *p, int *i);
void	ft_puthex(unsigned int n, char x, int *i);