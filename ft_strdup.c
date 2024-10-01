/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:45:30 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 13:45:34 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		num;
	size_t		i;
	char		*s1;

	i = 0;
	num = ft_strlen(s) + 1;
	s1 = (char *)ft_calloc(num, 1);
	if (!s || !s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
