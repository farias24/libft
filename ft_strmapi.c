/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:45:58 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 11:46:07 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
