/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:33 by farias            #+#    #+#             */
/*   Updated: 2024/09/25 18:08:21 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // For malloc
#include <stddef.h>

void	*ft_memset(void *str, int a, size_t b)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < b)
	{
		ptr[i] = (unsigned char)a;
		i++;
	}
	return str;
}

void *ft_calloc(size_t num_elements, size_t element_size) {
    size_t total_size = num_elements * element_size;
    void *ptr;

    // Check for overflow
    if (element_size != 0 && total_size / element_size != num_elements) {
        return NULL;  // Multiplication overflowed
    }

    ptr = malloc(total_size);
    if (ptr != NULL) {
        ft_memset(ptr, 0, total_size);
    }

    return ptr;
}
