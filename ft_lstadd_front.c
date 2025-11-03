/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:51:23 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *lst = NULL;
// 	t_list *new_node;
// 	// Création d'une nouvelle node
// 	new_node = ft_lstnew(ft_strdup("New Node"));
// 	// Ajout de la nouvelle node au début de la liste
// 	ft_lstadd_front(&lst, new_node);	
// 	// Affichage du contenu de la liste
// 	t_list *temp = lst;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	// Libération de la mémoire
// 	ft_lstclear(&lst, free);
// 	return (0);
// }