/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:44:10 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 12:16:48 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	size_t	len;

	len = ft_nbrlen(n);
	num = n;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (num == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		ptr[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
