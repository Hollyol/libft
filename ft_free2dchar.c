/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2dchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:03:43 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 16:03:45 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free2dtab(char **str)
{
	char	**beg;

	if (!str)
		return ;
	beg = str;
	while (*str)
	{
		free(*str);
		*(str++) = NULL;
	}
	free(beg);
	beg = NULL;
}
