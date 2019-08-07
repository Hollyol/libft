/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:38:23 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/19 14:29:41 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_get_start(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (!s[i])
		return (-1);
	return (i);
}

static int	trim_get_end(char const *s)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i--;
	return (i + 1);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*dest;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	start = trim_get_start(s);
	end = trim_get_end(s);
	i = start;
	if (!(dest = (char *)malloc((end - start + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	while (i < end)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
