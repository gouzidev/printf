#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    va_list v;
    va_start (v, s);

    while (*s)
    {
        if (*s != '%')        
            ft_putchar(*s);
        else
        {
            s++;
            if (*s == 'c')
                ft_putchar(va_arg(v, int));
            if (*s == 's')
                ft_putstr(va_arg(v, char*));
            if (*s == 'i' || *s == 'd')
                ft_putint(va_arg(v, int));
            if (*s == 'u')
                ft_putunsigned(va_arg(v, unsigned int));
            if (*s == '%')
                ft_putchar('%');
            if (*s == 'p')
                ft_putaddr(va_arg(v, void *));
            if (*s == 'x' || *s == 'X')
                ft_puthex(va_arg(v, unsigned int), *s);
        }
        s++;
    }
    va_end(v);
}

int main()
{
    char *str1 = "hello";
    char const *str2 = "hello";

    char c1 = 'c';
    char c2 = ' ';
    char c3 = '#';
    char c4 = '0';
    char c5 = 126;
    char c6 = 127;
    char c7 = 7;

    int i1 = 5;
    int i2 = 0;
    int i3 = -5;
    int i4 = 2147483647;
    int i5 = -2147483648;
    int i6 = 0x5;

    unsigned int u1 = 5;
    unsigned int u2 = 0;
    unsigned int u3 = -1;
    unsigned int u4 = 4000000000u;
    unsigned int u5 = 0.5;

    ft_printf("%s   %s\n",str1, str2);
       printf("%s   %s\n",str1, str2);

    ft_printf("%p   %p\n",str1, str2);
       printf("%p   %p\n",str1, str2);

    ft_printf("%c     \n",*str1);
       printf("%c     \n",*str1);

    ft_printf("%c     \n",*str2); 
       printf("%c     \n",*str2);

    ft_printf("%c     \n",c1);
       printf("%c     \n",c1);
    ft_printf("%c     \n",c2);
       printf("%c     \n",c2);
    ft_printf("%c     \n",c3);
       printf("%c     \n",c3);
    ft_printf("%c     \n",c4);
       printf("%c     \n",c4);
    ft_printf("%c     \n",c5);
       printf("%c     \n",c5);
    ft_printf("%c     \n",c6);
       printf("%c     \n",c6);
    ft_printf("%c     \n",c7);
       printf("%c     \n",c7);

    ft_printf("%i     \n",i1);
       printf("%i     \n",i1);
    ft_printf("%i     \n",i2);
       printf("%i     \n",i2);
    ft_printf("%i     \n",i3);
       printf("%i     \n",i3);
    ft_printf("%i     \n",i4);
       printf("%i     \n",i4);
    ft_printf("%i     \n",i5);
       printf("%i     \n",i5);

    ft_printf("%d     \n",i1);
       printf("%d     \n",i1);
    ft_printf("%d     \n",i2);
       printf("%d     \n",i2);
    ft_printf("%d     \n",i3);
       printf("%d     \n",i3);
    ft_printf("%d     \n",i4);
       printf("%d     \n",i4);
    ft_printf("%d     \n",i5);
       printf("%d     \n",i5);
    ft_printf("%d     \n",i6);
       printf("%d     \n",i6);

    ft_printf("%d     \n",i1);
       printf("%d     \n",i1);
    ft_printf("%d     \n",i2);
       printf("%d     \n",i2);
    ft_printf("%d     \n",i3);
       printf("%d     \n",i3);
    ft_printf("%d     \n",i4);
       printf("%d     \n",i4);
    ft_printf("%d     \n",i5);
       printf("%d     \n",i5);
    ft_printf("%d     \n",i6);
       printf("%d     \n",i6);

    ft_printf("%u     \n",u1);
       printf("%u     \n",u1);
    ft_printf("%u     \n",u2);
       printf("%u     \n",u2);
    ft_printf("%u     \n",u3);
       printf("%u     \n",u3);
    ft_printf("%u     \n",u4);
       printf("%u     \n",u4);
    ft_printf("%u     \n",u5);
       printf("%u     \n",u5);

    ft_printf("%x     \n",u1);
       printf("%x     \n",u1);
    ft_printf("%x     \n",u2);
       printf("%x     \n",u2);
    ft_printf("%x     \n",u3);
       printf("%x     \n",u3);
    ft_printf("%x     \n",u4);
       printf("%x     \n",u4);
    ft_printf("%x     \n",u5);
       printf("%x     \n",u5);

    ft_printf("%x     \n",i1);
       printf("%x     \n",i1);
    ft_printf("%x     \n",i2);
       printf("%x     \n",i2);
    ft_printf("%x     \n",i3);
       printf("%x     \n",i3);
    ft_printf("%x     \n",i4);
       printf("%x     \n",i4);
    ft_printf("%x     \n",i5);
       printf("%x     \n",i5);

    ft_printf("%X     \n",u1);
       printf("%X     \n",u1);
    ft_printf("%X     \n",u2);
       printf("%X     \n",u2);
    ft_printf("%X     \n",u3);
       printf("%X     \n",u3);
    ft_printf("%X     \n",u4);
       printf("%X     \n",u4);
    ft_printf("%X     \n",u5);
       printf("%X     \n",u5);

    ft_printf("%X     \n",i1);
       printf("%X     \n",i1);
    ft_printf("%X     \n",i2);
       printf("%X     \n",i2);
    ft_printf("%X     \n",i3);
       printf("%X     \n",i3);
    ft_printf("%X     \n",i4);
       printf("%X     \n",i4);
    ft_printf("%X     \n",i5);
       printf("%X     \n",i5);
}