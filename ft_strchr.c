/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:45:12 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 13:45:18 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}
