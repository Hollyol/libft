/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:39:12 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/19 11:39:28 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dst;

	if (!(dst = (char *)malloc((FT_MIN(n, ft_strlen(s)) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < n)
		dst[i] = s[i];
	return (dst);
}
