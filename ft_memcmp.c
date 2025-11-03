/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:11:03 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:21:31 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (i < n && tmp_s1[i] == tmp_s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)tmp_s1[i] - (unsigned char)tmp_s2[i]);
}
// #include <stdio.h>
// int main()
// {
// 	const char str1[] = "HelloWorld";
// 	const char str2[] = "HelloWxrld";
// 	size_t n = 10;
// 	int result = ft_memcmp(str1, str2, n);
// 	if (result < 0)
// 		printf("str1 est inférieur à str2\n");
// 	else if (result > 0)
// 		printf("str1 est supérieur à str2\n");
// 	else
// 		printf("str1 est égal à str2\n");
// 	return 0;
// }