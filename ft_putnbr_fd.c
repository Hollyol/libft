/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:46:22 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/19 11:46:23 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_fd_putdigit(int n, int fd)
{
	char c;

	c = '0' + n;
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = (-1) * (unsigned int)n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	putnbr_fd_putdigit(nbr % 10, fd);
}
