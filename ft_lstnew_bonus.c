#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list  *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include <stdio.h>

int main()
{
	char *content = "Hello, World";
	t_list *new_mode = ft_lstnew(content);
	printf("%s\n", (char *)new_mode->content);
	free(new_mode);
	return (0);
}*/