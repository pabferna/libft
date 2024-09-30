/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabferna <pabferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:40:47 by pabferna          #+#    #+#             */
/*   Updated: 2024/02/25 14:40:47 by pabferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*s1;

	i = 0;
	c2 = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == c2)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
