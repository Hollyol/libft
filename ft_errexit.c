/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errexit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 15:14:56 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 15:14:58 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_errexit(const char *message)
{
	ft_putstr("\033[01;31mFatal Error :\033[01;0m ");
	ft_putendl(message);
	exit(EXIT_FAILURE);
}
