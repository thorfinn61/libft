/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:39:38 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
//Exec la f sur chaque node puis return une nouvelle liste
// #include <stdio.h>
// void    *dup_content(void *content)
// {
//     return (ft_strdup((char *)content));
// }
// void    del_content(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *mapped = NULL;
//     // Création d'une petite liste : "Hello" -> "World" -> "42"
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hello")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42")));
//     // Appel de ft_lstmap
//     mapped = ft_lstmap(lst, dup_content, del_content);
//     // Affichage de la nouvelle liste
//     t_list *tmp = mapped;
//     while (tmp)
//     {
//         printf("%s\n", (char *)tmp->content);
//         tmp = tmp->next;
//     }
//     // Libération
//     ft_lstclear(&lst, del_content);
//     ft_lstclear(&mapped, del_content);

//     return (0);
// }
//cmd
// make bonus && gcc ft_lstmap.c -L. -lft -o lstmap_test
