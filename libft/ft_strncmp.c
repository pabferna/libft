/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:59:02 by marvin            #+#    #+#             */
/*   Updated: 2024/02/24 17:59:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i] - (unsigned char) s2[i]));
		i++;
	}
	return (0);
}

/*int main(void)
{
	const char s1_p[] = "000002987";
	const char s2_p[] = "000000987";
	size_t n_p = 6;
	printf("%d\n", ft_strncmp(s1_p, s2_p, n_p));
	printf("%d\n", strncmp(s1_p, s2_p, n_p));
	return(0);
}*/