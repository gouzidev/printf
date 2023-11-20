#include "ft_printf.h"

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

    int r1 = ft_printf("%c\n", c1);
    int r2 = printf("%c\n", c1);

    int r3 = ft_printf("%c\n", c2);
    int r4 = printf("%c\n", c2);
    
    int r5 = ft_printf("%c\n", c6);
    int r6 = printf("%c\n", c6);

    int r7 = ft_printf("%c\n", c7);
    int r8 = printf("%c\n", c7);

	int r9;
	int r10;

	int r11;
	int r12;
    
	printf("[%i]\n", r1);
    printf("[%i]\n", r2);
	printf("[%i]\n", r3);
    printf("[%i]\n", r4);
	printf("[%i]\n", r5);
    printf("[%i]\n", r6);
    printf("[%i]\n", r7);
    printf("[%i]\n", r8);

    r1 = ft_printf("%i\n", i1);
    r2 = printf("%i\n", i1);

    r3 = ft_printf("%i\n", i2);
    r4 = printf("%i\n", i2);
    
    r5 = ft_printf("%i\n", i3);
    r6 = printf("%i\n", i3);

    r7 = ft_printf("%i\n", i4);
    r8 = printf("%i\n", i4);

    r9 = ft_printf("%i\n", i5);
    r10 = printf("%i\n", i5);

    r11 = ft_printf("%i\n", i6);
    r12 = printf("%i\n", i6);
	
	printf("[%i]\n", r1);
    printf("[%i]\n", r2);
	printf("[%i]\n", r3);
    printf("[%i]\n", r4);
	printf("[%i]\n", r5);
    printf("[%i]\n", r6);
    printf("[%i]\n", r7);
    printf("[%i]\n", r8);

    r1 = ft_printf("%u\n", u1);
    r2 = printf("%u\n", u1);

    r3 = ft_printf("%u\n", u2);
    r4 = printf("%u\n", u2);
    
    r5 = ft_printf("%u\n", u3);
    r6 = printf("%u\n", u3);

    r7 = ft_printf("%u\n", u4);
    r8 = printf("%u\n", u4);

	
	printf("[%i]\n", r1);
    printf("[%i]\n", r2);
	printf("[%i]\n", r3);
    printf("[%i]\n", r4);
	printf("[%i]\n", r5);
    printf("[%i]\n", r6);
    printf("[%i]\n", r7);
    printf("[%i]\n", r8);

    r1 = ft_printf("%x\n", u1);
    r2 = printf("%x\n", u1);

    r3 = ft_printf("%x\n", u2);
    r4 = printf("%x\n", u2);
    
    r5 = ft_printf("%x\n", u3);
    r6 = printf("%x\n", u3);

    r7 = ft_printf("%x\n", u4);
    r8 = printf("%x\n", u4);

	
	printf("[%i]\n", r1);
    printf("[%i]\n", r2);
	printf("[%i]\n", r3);
    printf("[%i]\n", r4);
	printf("[%i]\n", r5);
    printf("[%i]\n", r6);
    printf("[%i]\n", r7);
    printf("[%i]\n", r8);

    r1 = ft_printf("%p\n", u1);
    r2 = printf("%p\n", u1);

    r3 = ft_printf("%p\n", u2);
    r4 = printf("%p\n", u2);
    
    r5 = ft_printf("%p\n", u3);
    r6 = printf("%p\n", u3);

    r7 = ft_printf("%p\n", u4);
    r8 = printf("%p\n", u4);

	
	printf("[%i]\n", r1);
    printf("[%i]\n", r2);
	printf("[%i]\n", r3);
    printf("[%i]\n", r4);
	printf("[%i]\n", r5);
    printf("[%i]\n", r6);
    printf("[%i]\n", r7);
    printf("[%i]\n", r8);
}
