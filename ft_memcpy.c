/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:17:18 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 12:17:20 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
