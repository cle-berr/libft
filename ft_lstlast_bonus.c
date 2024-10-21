#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int len;

    len = ft_lstsize(lst);
    while (len > 0)
    {
        lst = lst->next;
        len--;
    }
    return (lst);
}