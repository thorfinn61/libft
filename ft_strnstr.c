/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:30:17 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/04 11:37:15 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	const char *big = "hello world";
// 	const char *little = "world";
// 	size_t len = 15;

// 	char *result = ft_strnstr(big, little, len);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not Found\n");

// 	return 0;
// }