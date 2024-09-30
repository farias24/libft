/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:28:13 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 11:28:17 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(sizeof(char) * (len));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	ft_strlcat(ptr, s2, len);
	return (ptr);
}
