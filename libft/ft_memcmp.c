/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 17:55:02 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/01 15:51:48 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;
	size_t			i;

	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr1[i])
			return (ptr[i] - ptr1[i]);
		i++;
	}
	return (0);
}
