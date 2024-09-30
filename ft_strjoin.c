/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:58:42 by marvin            #+#    #+#             */
/*   Updated: 2024/02/24 17:58:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		totalsize;

	if (!s1 || !s2)
		return (0);
	totalsize = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(totalsize * sizeof(char) + 1);
	if (!str)
		return (0);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - totalsize);
}
