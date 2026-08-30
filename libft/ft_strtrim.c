/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:23:11 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/06 15:26:51 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	trim_len;
	char	*str;

	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	trim_len = end - start + 1;
	str = ft_substr(s1, start, trim_len);
	return (str);
}
