/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:47:19 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 13:47:23 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *str, int c)
{
	char	*res;

	res = '\0';
	while (*str)
	{
		if (*str == c)
			res = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (res);
}
