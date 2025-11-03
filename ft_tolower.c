/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:43:47 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 14:12:26 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// #include <stdio.h>
// int main()
// {
// 	char upper = 'A';
// 	char lower = ft_tolower(upper);
// 	printf("Original : %c\n", upper);
// 	printf("To Lower : %c\n", lower);
// 	return (0);
// }