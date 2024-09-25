/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:52:31 by farias            #+#    #+#             */
/*   Updated: 2024/09/09 18:03:26 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int main() {
    // Crear un buffer de 20 bytes
    char buffer[20];
	printf("%s\n", buffer);
    // Llenar el buffer con el carácter 'X'
    ft_bzero(buffer, sizeof(buffer));
	printf("Buffer después de ft_memset: %s\n", buffer);
    // Añadir un terminador nulo al final para que sea una cadena válida
    buffer[19] = '\0';
	bzero(buffer, sizeof(buffer));
    // Imprimir el contenido del buffer
    printf("Buffer después de memset: %s\n", buffer);

    return 0;
}

