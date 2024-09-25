/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:10:57 by felipe            #+#    #+#             */
/*   Updated: 2024/09/11 12:19:18 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main (void)
{
	char *src= "Hola mundo";
	char *dest;

	ft_memcpy(dest, src, 4);
	printf("origen %s, destino %s\n", src, dest);
	return 0;
}
