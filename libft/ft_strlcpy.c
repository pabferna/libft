/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:25:32 by marvin            #+#    #+#             */
/*   Updated: 2024/02/18 15:25:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}

/*int main(void)
{
	char dst[5] = "kjgjh";
	char dst1[5] = "kjgjh";
	const char *src = "";
	size_t	dstsize = 10;
	printf("%zu %s \n", ft_strlcpy(dst, src, dstsize), dst);
	printf("%li %s \n", strlcpy(dst1, src, dstsize), dst1);
	return(0);
}*/