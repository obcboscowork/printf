/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:37:49 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/03 15:12:12 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, len + 1);
	return (str);
}
