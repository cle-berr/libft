/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:57:16 by cle-berr          #+#    #+#             */
/*   Updated: 2024/10/17 16:49:32 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main() 
{
    const char *str = "Hello, World!";
    char ch = 'l';

    printf("ft_strchr: trouvé à la position : %s\n", ft_strchr(str, ch));

    printf("strchr: trouvé à la position : %s\n", strchr(str, ch));

    return 0;
}*/