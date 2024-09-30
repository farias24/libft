/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:48:11 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 13:48:15 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	char	*ptr;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		start = len_s;
	if (len > (len_s - start))
		len = len_s - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy((char *)ptr, (char *)s + start, (size_t)len);
	ptr[len] = '\0';
	return (ptr);
}
