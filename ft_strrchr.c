/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:59:13 by marvin            #+#    #+#             */
/*   Updated: 2024/02/24 17:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c2;

	c2 = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c2)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
