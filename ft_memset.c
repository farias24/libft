/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:18:30 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 12:18:32 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int a, size_t b)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < b)
	{
		ptr[i] = (unsigned char)a;
		i++;
	}
	return (str);
}
