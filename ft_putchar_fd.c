/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:54:04 by elsahin           #+#    #+#             */
/*   Updated: 2025/10/30 12:26:23 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// ft_putchar_fd écrit le caractère 'c' dans le descripteur de fichier 'fd'.
// fd = 1 → stdout (terminal)
// fd = 2 → stderr
// utile pour afficher dans un fichier ou rediriger la sortie