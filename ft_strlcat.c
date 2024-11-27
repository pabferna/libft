/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabferna <pabferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:58:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 18:40:39 by pabferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		return (srcsize);
	if (dstsize < i)
		srcsize += dstsize;
	else
		srcsize += i;
	while (src[j] != '\0' && ((i + 1 + j) < dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (srcsize);
}
