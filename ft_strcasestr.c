/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:06:32 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/27 17:43:52 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcasestr_found(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0' && needle[i] != '\0'\
			&& (haystack[i] == needle[i]\
				|| (ft_islower(haystack[i]) && haystack[i] == needle[i] + 32)\
				|| (ft_isupper(haystack[i]) && haystack[i] == needle[i] - 32)))
		i++;
	return (needle[i] == '\0');
}

char		*ft_strcasestr(const char *haystack, const char *needle)
{
	while (*haystack != '\0')
	{
		if (strcasestr_found(haystack, needle))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
