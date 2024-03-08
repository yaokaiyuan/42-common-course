#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
int main()
{
	close(1);
	char str[10];
	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str[3] = 4;
	str[4] = 5;
	int a = ft_printf("%x  %x\n",2147483647,0);
	int b = printf("%x  %x\n", 2147483647, 0);
	char o = '0' + a;
	write(2, &o, 1);
	write(2, "\n", 1);
	o = '0' + b;
	write(2, &o, 1);
}