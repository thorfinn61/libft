#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

// #include <stdio.h>
// int main(void)
// {
//     // On crée trois maillons
//     t_list *node1 = ft_lstnew("A");
//     t_list *node2 = ft_lstnew("B");
//     t_list *node3 = ft_lstnew("C");

//     // On relie les maillons manuellement
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     t_list *head = node1; // head pointe sur le premier maillon

//     // Test de ft_lstsize
//     printf("Taille de la liste : %d\n", ft_lstsize(head));

//     return 0;
// }
