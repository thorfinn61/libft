/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:26:42 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 14:00:30 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
// #include <stdio.h>
// void to_upper_index(unsigned int i, char *c)
// {
//     if (i % 2 == 0) 
//     {
//         if (*c >= 'a' && *c <= 'z')
//             *c = *c - 32;
//     }
// }

// int main()
// {
//     char str[] = "hello world";
//     printf("Avant  : %s\n", str);
//     ft_striteri(str, &to_upper_even);
//     printf("Après  : %s\n", str);
//     return (0);
// }