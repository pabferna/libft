/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:24:24 by marvin            #+#    #+#             */
/*   Updated: 2024/03/05 18:24:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		write (fd, &(char){n % 10 + '0'}, 1);
	}
	else
		write (fd, &(char){n % 10 + '0'}, 1);
}

/*int main()
{
	int n;
	int fd;

	n = -1000;
	fd = 1;
	ft_putnbr_fd(n,fd);
	return(0);
}*/