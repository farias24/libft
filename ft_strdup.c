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

char	*ft_strdup(const char *s1)
{
	size_t		num;
	size_t		i;
	char		*sc1;

	i = 0;
	num = ft_strlen(s1) + 1;
	sc1 = (char *)ft_calloc(num, 1);
	if (!s1 || !sc1)
		return (NULL);
	while (s1[i])
	{
		sc1[i] = s1[i];
		i++;
	}
	sc1[i] = 0;
	return (sc1);
}
