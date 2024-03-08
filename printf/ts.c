#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
int main()
{
	close(1);
	char str[2];
	str[0] = -20;
	str[1] = 0;
	int a = ft_printf("%s  %d\n",2147483647,0);
	int b = printf("%s  %d\n", 2147483647,0);
	char o = '0' + a;
	write(2, &o, 1);
	write(2, "\n", 1);
	o = '0' + b;
	write(2, &o, 1);
}