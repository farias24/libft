/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:37:32 by farias            #+#    #+#             */
/*   Updated: 2024/09/09 15:43:58 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
#include <stdio.h>
#include <string.h>

int main() {
    // Crear un buffer de 20 bytes
    char buffer[20];

    // Llenar el buffer con el carácter 'X'
    ft_memset(buffer, 'a', 3);
	printf("Buffer después de ft_memset: %s\n", buffer);
    // Añadir un terminador nulo al final para que sea una cadena válida
    buffer[19] = '\0';
	memset(buffer, 'a', 3);
    // Imprimir el contenido del buffer
    printf("Buffer después de memset: %s\n", buffer);

    return 0;
}

