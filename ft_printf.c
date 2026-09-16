/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:37:08 by obhanja           #+#    #+#             */
/*   Updated: 2026/09/16 15:38:50 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format,...)
{
	int i;
	va_list args;
	i = 0;
	va_start(args,format);
	while(format[i] != '\0')
	{
		if(format[i] == '%')
		{
			if(format[i+1]=='c')
			{
				char c;
				c = va_arg(args,int);
				write(1,&c,1);
			}
			else if(format[i+1] == 's')
			{
				print_string(va_arg(args,char *));
			}
			else if (format[i+1] == 'd'|| format[i+1] =='i')
			{
				print_number(va_arg(args,int));
			}
			i++;
		}
		else
		{
			write(1,&format[i],1);
		}
		i++;
	}
	va_end(args);
	return(0);
}