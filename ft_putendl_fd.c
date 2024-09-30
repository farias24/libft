/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:04:13 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 12:04:36 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	i += write(fd, s, ft_strlen(s));
	if (i == -1)
		return (i);
	flag += write(fd, "\n", 1);
	if (flag == -1)
		return (flag);
	else
		return (i + 1);
}
