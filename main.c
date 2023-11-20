#include "ft_printf.h"

int main()
{
	int r1, r2;

    r1 = ft_printf("\x5");
    printf("[%i]\n", r1);

    r2 = printf("\x5");
    printf("[%i]\n", r2);

}
