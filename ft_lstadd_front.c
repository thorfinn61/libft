#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst; // Le nouvel élément pointe vers l'ancien premier
	*lst = new;       // lst pointe maintenant vers le nouvel élément
}