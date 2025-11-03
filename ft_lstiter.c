/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsahin <elsahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:56:01 by elsahin           #+#    #+#             */
/*   Updated: 2025/11/03 15:41:10 by elsahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
//appliquer une fonction a chaque element de la liste
// #include <stdio.h>
// void    print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }
// int main(void)
// {
//     t_list *lst = NULL;
//     // Création d'une petite liste : "First" -> "Second" -> "Third"
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("First")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Third")));
//     // Appel de ft_lstiter pour afficher le contenu de chaque élément
//     ft_lstiter(lst, print_content);
//     ft_lstclear(&lst, free);
//     return (0);
// }