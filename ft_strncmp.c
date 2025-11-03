/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:36:03 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 13:57:12 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// int main()
// {
// 	const char *str1 = "helos";
// 	const char *str2 = "hello world";

// 	int result = ft_strncmp(str1, str2, 5);
// 	if (result < 0)
// 		printf("str1 est inférieur à str2\n");
// 	else if (result > 0)
// 		printf("str1 est supérieur à str2\n");
// 	else
// 		printf("str1 est égal à str2\n");

// 	return 0;
// }