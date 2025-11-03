/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:27:34 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 12:15:12 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			d[n] = s[n];
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//     // Test 1: Copie normale sans chevauchement
//     char str1[] = "Hello World";
//     printf("Test 1 - Avant: %s\n", str1);
//     ft_memmove(str1 + 6, "There", 5);
//     printf("Test 1 - Après: %s\n\n", str1);

//     // Test 2: Copie avec chevauchement (droite à gauche)
//     char str2[] = "Hello World";
//     printf("Test 2 - Avant: %s\n", str2);
//     ft_memmove(str2 + 2, str2, 5);  // Copie "Hello" vers "llo W"
//     printf("Test 2 - Après: %s\n\n", str2);

//     // Test 3: Copie avec chevauchement (gauche à droite)
//     char str3[] = "Hello World";
//     printf("Test 3 - Avant: %s\n", str3);
//     ft_memmove(str3, str3 + 6, 5);  // Copie "World" au début
//     printf("Test 3 - Après: %s\n\n", str3);

//     // Test 4: Test avec n = 0
//     char str4[] = "Hello World";
//     printf("Test 4 - Avant: %s\n", str4);
//     ft_memmove(str4, "Test", 0);
//     printf("Test 4 - Après: %s\n\n", str4);

//     return (0);
// }	