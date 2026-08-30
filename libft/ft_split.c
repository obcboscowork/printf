/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obhanja <obhanja@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:03:49 by obhanja           #+#    #+#             */
/*   Updated: 2026/07/06 15:19:19 by obhanja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, int start, char c)
{
	int	len;

	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;
	int		word_index;

	count = word_count(s, c);
	str = malloc((count + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			str[word_index] = ft_substr(s, i, word_len(s, i, c));
			word_index++;
			i = i + word_len(s, i, c);
		}
	}
	str[word_index] = NULL;
	return (str);
}
