/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:34:05 by elsahin           #+#    #+#             */
/*   Updated: 2025/10/28 14:05:20 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	const char src[20] = "fdp";
// 	char dest[20];
// 	size_t i = 0;

// 	ft_memcpy(dest, src, 2);
// 	while (i < 2)
// 	{
// 		printf("%c\n", dest[i]);
// 		i++;
// 	}
// 	return (0);
// }