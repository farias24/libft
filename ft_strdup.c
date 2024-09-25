/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:09:00 by farias            #+#    #+#             */
/*   Updated: 2024/09/25 18:09:21 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // For malloc
#include <string.h>  // For strcpy

char *ft_strdup(const char *s) {
    char *dup;
    size_t len;

    if (s == NULL) {
        return NULL;  // Optionally handle null input strings
    }

    len = strlen(s) + 1;  // Include space for the terminating null byte
    dup = (char *)malloc(len);  // Allocate memory

    if (dup == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }

    ft_strcpy(dup, s);  // Copy the string into the newly allocated memory
    return dup;  // Return the pointer to the duplicated string
}
