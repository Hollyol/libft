/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:00:42 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 16:00:44 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putbitdigit(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else if (nb < 16)
		ft_putchar(nb + 'a');
	else
		errno = EINVAL;
}

void		ft_putbit(unsigned int nb, int base)
{
	if (0xf < (unsigned int)base)
	{
		errno = EINVAL;
		return ;
	}
	if (nb >= (unsigned int)base)
		ft_putbit(nb / base, base);
	ft_putbitdigit(nb % base);
}
