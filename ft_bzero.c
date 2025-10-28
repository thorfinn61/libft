/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:41:57 by elsahin           #+#    #+#             */
/*   Updated: 2025/10/28 13:13:36 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tmp_ptr[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// int main()
// {
// 	char str[20] = "Hello world";
// 	size_t i = 0;

// 	ft_bzero(str, 9);

// 	while (i < 12)
// 	{
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }