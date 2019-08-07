/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:27:04 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/27 18:43:40 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtrunc(char **str, unsigned int start, size_t len)
{
	char			*tmp;

	tmp = *str;
	if (!(*str = ft_strndup((char *)(tmp + start), len)))
		return ;
	if (tmp)
		free(tmp);
}
