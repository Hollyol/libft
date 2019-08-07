/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:01:03 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 16:01:04 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_point		*ft_pointnew(unsigned int x, unsigned int y)
{
	t_point *new;

	if (!(new = (t_point *)ft_memalloc(sizeof(*new))))
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
