/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:21:49 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 12:20:16 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_ptr;

	i = 0;
	tmp_ptr = (unsigned char *) s;
	while (i < n)
	{
		tmp_ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
// remplir une zone memoire avec une valeur donnee
// #include <stdio.h>
// int main()
// {
// 	char str[20] = "Hello world";
// 	ft_memset(str, 'x', 7);
// 	printf("%s\n", str);
// }