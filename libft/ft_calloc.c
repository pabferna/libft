/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabferna <pabferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:34:35 by pabferna          #+#    #+#             */
/*   Updated: 2024/02/25 14:34:35 by pabferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*src;

	src = malloc(nmemb * size);
	if (src)
		ft_bzero(src, nmemb * size);
	return (src);
}
int main()
{
	size_t nmemb = 4;
	size_t size = 3;
	printf("%p\n", ft_calloc(nmemb, size));
	printf("%p\n", calloc(nmemb, size));
}