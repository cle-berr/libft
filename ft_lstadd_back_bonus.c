#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    while ()
    {
    new->next = *lst;
    if (*lst == NULL)
        *lst = new;
    }
}