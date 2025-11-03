/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:59:32 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:23:57 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_ptr;

	i = 0;
	tmp_ptr = (unsigned char *) s;
	while (i < n)
	{
		if (tmp_ptr[i] == (unsigned char) c)
			return (&tmp_ptr[i]);
		i++;
	}
	return (NULL);
}
//Chercher un caractere dans une zone memoire
// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello, World!";
// 	char ch = 'W';
// 	size_t n = 13;

// 	char *result = ft_memchr(str, ch, n);
// 	if (result)
// 		printf("Caractère trouvé: %c\n", *result);
// 	else
// 		printf("Caractère non trouvé\n");

// 	return 0;
// }