/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/10/30 09:57:36 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	nb;
	char	*str;

	nb = n;
	size = get_size(nb);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[size - 1] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}
//#include <stdio.h>
// int main()
//{
//    int n = -2147483648;
//    printf("%s\n", ft_itoa(n));
//}