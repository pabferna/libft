/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabferna <pabferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:45:22 by pabferna          #+#    #+#             */
/*   Updated: 2024/02/25 14:45:22 by pabferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s2;
	char	c2;
	size_t	i;

	s2 = (char *)s;
	c2 = (char)c;
	i = 0;
	while (i < n)
	{
		s2[i] = c2;
		i++;
	}
	return (s2);
}
