/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:00:37 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/04 09:55:16 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i < (size - 1)))
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (src_len + dst_len);
}
// #include <stdio.h>
// int main()
// {
// 	char dest[20] = "Hello, ";
// 	const char *src = "World!";
// 	size_t result = ft_strlcat(dest, src, 12);
// 	printf("Resultat: %s\n", dest);
// 	printf("Longueur totale: %zu\n", result);
// 	return 0;
// }	