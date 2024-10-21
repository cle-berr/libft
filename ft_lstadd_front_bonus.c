#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new->next = *lst;
    *lst = new;
}

/*#include <stdio.h>

int main(void)
{
    t_list *list = NULL;

    t_list *new = ft_lstnew("New");

    ft_lstadd_front(&list, new);

    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(new);
}*/