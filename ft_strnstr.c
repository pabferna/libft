/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:59:09 by marvin            #+#    #+#             */
/*   Updated: 2024/02/24 17:59:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		while (little[j] != '\0' && j + i < len)
		{
			if (big[i + j] != little[j])
				break ;
			else if (big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main(void)
{
	const char big[] = " " ;
	const char little[] = "hola";
	size_t len = 20;
	printf("%s\n", ft_strnstr(big, little, len));
	// printf("%s\n", strnstr(big, little, len));
	return(0);
}