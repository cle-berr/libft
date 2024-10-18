/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:38:56 by cle-berr          #+#    #+#             */
/*   Updated: 2024/10/14 14:38:58 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1 = 'A';
    char c2 = '5';
    char c3 = '#';
    
    printf("%c is alnum: %d\n", c1, ft_isalnum(c1)); // Affiche 1
    printf("%c is alnum: %d\n", c2, ft_isalnum(c2)); // Affiche 1
    printf("%c is alnum: %d\n", c3, ft_isalnum(c3)); // Affiche 0

    return 0;
}*/
