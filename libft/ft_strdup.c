/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:58:39 by marvin            #+#    #+#             */
/*   Updated: 2024/02/24 17:58:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*src;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s) + 1;
	src = malloc(len * sizeof(char));
	if (src == NULL)
		return (NULL);
	while (s[i])
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
