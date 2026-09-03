#include "ft_printf.h"

int ft_printf(const char *format,...)
{
	int i;

	i = 0;
	while(format[i] != '\0')
	{
		if(format[i] == '%')
		{

		}
		else
		{
			write(1,&format[i],1);
		}
		i++;
	}
	return(0);
}