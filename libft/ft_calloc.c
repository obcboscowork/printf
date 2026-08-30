/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:00:20 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/01 19:20:46 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = malloc (nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero (str, nmemb * size);
	return (str);
}
