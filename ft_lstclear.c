/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:42:02 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
// #include <stdio.h>
// void    del_content(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *lst = NULL;
// 	// Création d'une petite liste : "First" -> "Second" -> "Third"
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("First")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Third")));
// 	// Appel de ft_lstclear pour libérer toute la liste
// 	ft_lstclear(&lst, del_content);
// 	if (lst == NULL)
// 		printf("La liste a été correctement libérée et est maintenant NULL.\n");
// 	else
// 		printf("La liste n'est pas NULL après ft_lstclear.\n");
// 	return (0);
// }