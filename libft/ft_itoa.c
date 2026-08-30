/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:28:44 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/06 15:35:40 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long ln)
{
	int	count;

	count = 0;
	while (ln != 0)
	{
		ln = ln / 10;
		count++;
	}
	return (count);
}

static void	digit_fill(char *str, long cpy, int count, int is_negative)
{
	int	i;

	if (is_negative == 1)
		i = count;
	else
		i = count - 1;
	while (cpy != 0)
	{
		str[i] = (cpy % 10) + '0';
		i--;
		cpy = cpy / 10;
	}
	if (is_negative == 1)
		str[0] = '-';
	str[count + is_negative] = '\0';
}

char	*ft_itoa(int n)
{
	long	ln;
	int		is_negative;
	long	cpy;
	int		count;
	char	*str;

	ln = n;
	is_negative = 0;
	if (ln < 0)
	{
		is_negative = 1;
		ln = -ln;
	}
	if (ln == 0)
		return (ft_strdup("0"));
	cpy = ln;
	count = count_digit(ln);
	str = malloc((count + is_negative + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	digit_fill(str, cpy, count, is_negative);
	return (str);
}
