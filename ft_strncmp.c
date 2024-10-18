/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:26:55 by cle-berr          #+#    #+#             */
/*   Updated: 2024/07/09 09:26:59 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && (s1[c] && s2[c]))
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	if (c < n && ((s1[c] == '\0' && s2[c] != '\0') || \
		(s1[c] != '\0' && s2[c] == '\0')))
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	return (0);
}