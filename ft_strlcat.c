/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:58:47 by marvin            #+#    #+#             */
/*   Updated: 2024/05/17 00:13:47 by pablo            ###   ########.fr       */
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
int main(){
	char dst[20] = "ana,";
	printf("%ld", ft_strlcat(dst, "love you", 15));
	return (0);
}