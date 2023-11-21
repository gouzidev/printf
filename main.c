#include "ft_printf.h"

int main()
{
    ft_printf("%00000004d\n",0);
    ft_printf("%4d\n",-2147483648);
    ft_printf("%4d\n",2147483648);
    ft_printf("%d\n",2147483647);
    ft_printf("%05d\n",5);
    ft_printf("%05d\n",-5);

    printf("\n\n");

    printf("%00000004d\n",0);
    printf("%00000004d\n",2147483648);
    printf("%4d\n",-2147483648);
    printf("%d\n",2147483647);
    printf("%05d\n",5);
    printf("%05d\n",-5);
}