/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:45:52 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/07 18:15:47 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (dst);
	ptr = (unsigned char *)dst;
	ptr1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (dst);
}
