/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:40:11 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/04 12:23:16 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	dst = malloc(nmemb * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
// //Alloue de la memoire et l'initialise a 0
// #include <stdio.h>
// int main()
// {
//     int *arr;
//     size_t n = 5;
//     arr = (int *)ft_calloc(n, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Allocation mémoire échouée\n");
//         return 1;
//     }
//     for (size_t i = 0; i < n; i++)
//     {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     }
//     free(arr);
//     return 0;
// }