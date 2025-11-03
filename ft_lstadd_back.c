/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:44:19 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *new_node;
//     // Création d'une nouvelle node
//     new_node = ft_lstnew(ft_strdup("New Node"));
//     // Ajout de la nouvelle node à la fin de la liste
//     ft_lstadd_back(&lst, new_node);	
//     // Affichage du contenu de la liste
//     t_list *temp = lst;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
//     // Libération de la mémoire
//     ft_lstclear(&lst, free);
//     return (0);
// }