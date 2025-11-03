/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:51:36 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// void    del_content(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *node = ft_lstnew(ft_strdup("Content"));
// 	printf("Avant suppression : %s\n", (char *)node->content);
// 	ft_lstdelone(node, del_content);
// 	// Après la suppression, on ne peut plus accéder à node
// 	printf("Node supprimée.\n");
// 	return (0);
// }