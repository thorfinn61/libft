/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:40:11 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/04 11:36:02 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
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