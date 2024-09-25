/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:24:31 by farias            #+#    #+#             */
/*   Updated: 2024/09/23 17:42:00 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c) {
    char *resultado = NULL; // Puntero para almacenar la última aparición
    while (*str) {
        if (*str == c) {
            resultado = (char *)str; // Actualizar resultado si se encuentra
        }
        str++;
    }
    // Verificar también el carácter nulo
    if (c == '\0') {
        return (char *)str;
    }
    return resultado; // Devolver la última aparición o NULL
}
