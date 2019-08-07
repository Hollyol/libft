/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:27:50 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/29 14:47:57 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcdup(char **dst, const char *src, int c)
{
	int i;
	int j;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	if (!i)
		return (i);
	if (*dst)
		ft_strdel(dst);
	if (!(*dst = ft_strnew(i + 1)))
		return (-1);
	j = 0;
	while (j < i)
	{
		(*dst)[j] = src[j];
		j++;
	}
	if (j == 0)
		return (0);
	(*dst)[j] = '\0';
	return ((int)j);
}
