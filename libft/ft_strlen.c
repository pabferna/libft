/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:54:50 by marvin            #+#    #+#             */
/*   Updated: 2024/02/25 15:54:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;

	while(s[i] != '\0')
		i++; 
	return (i);
}

// int main(void)
//{
//	const char s_p[] = "";
//	printf("%zu\n", ft_strlen(s_p));
//	return(0);
//}