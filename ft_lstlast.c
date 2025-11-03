/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:40:41 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
//Retourne le dernier element de la liste
// #include <stdio.h>
// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *last = NULL;
//     // Création d'une petite liste : "First" -> "Second" -> "Third"
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("First")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Third")));
//     // Récupération du dernier élément
//     last = ft_lstlast(lst);
//     if (last)
//         printf("Dernier élément : %s\n", (char *)last->content);
//     else
//         printf("La liste est vide.\n");
//     ft_lstclear(&lst, free);
//     return (0);
// }