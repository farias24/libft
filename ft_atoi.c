/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <farias@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:19:36 by farias            #+#    #+#             */
/*   Updated: 2024/09/30 12:19:38 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	numb;
	int	flag;

	i = 0;
	flag = 0;
	sign = 1;
	numb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-') && flag == 0)
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		flag = 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = (str[i] - '0') + (numb * 10);
		i++;
	}
	return (numb * sign);
}
