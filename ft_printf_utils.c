/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:38:01 by obhanja           #+#    #+#             */
/*   Updated: 2026/09/16 15:45:24 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include "libft/libft.h"

int print_string(char *s)
{
	int i;
	i = 0;
	if(s == NULL)
	{
		write(1,"(null)",6);
		return(0);
	}
	while(s[i] != '\0')
	{
		write(1,&s[i],1);
		i++;
	}
	return(i);
}

int print_number(int n)
{
	int	i;
	char * result;
	i = 0;
	result = ft_itoa(n);
	while(result[i] != '\0')
	{
		write(1,&result[i],1);
		i++;
	}
	free(result);
	return(i);
}