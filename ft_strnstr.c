/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:23:54 by farias            #+#    #+#             */
/*   Updated: 2024/09/25 16:23:58 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // For size_t
#include <string.h>  // For strncmp

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;

    needle_len = strlen(needle);
    if (needle_len == 0) {
        return (char *)haystack;  // Empty needle. The specification states that the result is the full haystack.
    }

    while (*haystack && len >= needle_len) {
        // Only compare as long as there are enough chars left in 'haystack'
        if (len >= needle_len && strncmp(haystack, needle, needle_len) == 0) {
            return (char *)haystack;
        }
        haystack++;
        len--;
    }

    return NULL;  // No match found
}
