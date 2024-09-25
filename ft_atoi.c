/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:34 by farias            #+#    #+#             */
/*   Updated: 2024/09/25 16:24:37 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>  // For isspace

int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1;

    // Skip whitespace
    while (isspace((unsigned char)*str)) {
        str++;
    }

    // Check for a sign
    if (*str == '-' || *str == '+') {
        if (*str == '-') {
            sign = -1;
        }
        str++;
    }

    // Convert characters to integer
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}
