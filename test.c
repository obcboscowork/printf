#include "ft_printf.h"

int main(void)
{
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", "hello world");
	ft_printf("Null string: %s\n", NULL);
	ft_printf("Number: %d\n", 42);
	ft_printf("Negative: %d\n", -17);
	ft_printf("Using i: %i\n", 100);
	return (0);
}