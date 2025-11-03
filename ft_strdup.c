/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:15:53 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 14:00:19 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s1_len;
	char	*dest;

	i = 0;
	s1_len = ft_strlen(s1);
	dest = malloc((sizeof(char)) * (s1_len + 1));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>

// int main()
// {
//     char *original = "Hello";
//     char *copie = ft_strdup(original);
//     printf("Original : %s\n", original);
//     printf("Copie    : %s\n", copie);
//     free(copie);  
//     return (0);
// }