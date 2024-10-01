/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:41:38 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 11:42:49 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free2dstr(char **ptr, size_t index)
{
	while (index--)
		free(ptr[index]);
	free(ptr);
}

static size_t	ft_count_substrings(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_alloc_substrings(char **ptr, char const *s, char c)
{
	size_t	start;
	size_t	idx;

	idx = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		if (start > 0)
		{
			ptr[idx] = (char *)malloc(sizeof(char) * (start + 1));
			if (!ptr[idx])
				return (ft_free2dstr(ptr, idx), NULL);
			ft_memcpy(ptr[idx], s, start);
			ptr[idx++][start] = '\0';
		}
		s += start;
	}
	ptr[idx] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	sub_count;

	if (!s)
		return (NULL);
	sub_count = ft_count_substrings(s, c);
	ptr = (char **)malloc(sizeof(char *) * (sub_count + 1));
	if (!ptr)
		return (NULL);
	return (ft_alloc_substrings(ptr, s, c));
}
