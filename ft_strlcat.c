/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:09:45 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/09 13:17:01 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (dst[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res = res + size;
	else
		res = res + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (res);
}
