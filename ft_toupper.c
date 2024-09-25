/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:19:48 by felipe            #+#    #+#             */
/*   Updated: 2024/09/11 22:42:35 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_toupper(int c)
{
	if(c < 97 || c > 122)
		return (c);
	else
		return(c - 32);
}

int	main(void)
{
	int	letterd = 100;
	int	letterD = 68;
	int	sign = 42;
	int	mayusd,mayusD, mayus;

	mayusd = ft_toupper(letterd);
	mayusD = ft_toupper(letterD);
	mayus= ft_toupper(sign);

	write(1, &mayusd, 1);write(1, "\n", 1);
	write(1, &mayusD, 1);write(1, "\n", 1);
	write(1, &sign, 1);write(1, "\n", 1);
}
