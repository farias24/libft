/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:35:41 by farias            #+#    #+#             */
/*   Updated: 2024/09/09 11:48:58 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
/*
int	main()
{
	int	i;
	i = 0;
	while (i<100)
	{
		if (ft_isdigit(i) == 0 )
			printf("%d false \n", i);
		else
			printf("%d true \n", i);
		i++;
	}
}	
