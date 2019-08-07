/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:06:32 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/09 11:21:06 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strstr_found(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0' && needle[i] != '\0' && haystack[i] == needle[i])
		i++;
	return (needle[i] == '\0');
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	if (!ft_strlen(haystack) && !ft_strlen(needle))
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (strstr_found(haystack, needle))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
