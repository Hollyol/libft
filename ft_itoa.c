/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:43:19 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/19 12:01:39 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *dest;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(dest = (char *)malloc(2 * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		dest[1] = '\0';
		dest = ft_strjoin(dest, ft_itoa(-n));
	}
	else if (n > 9)
		dest = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		dest[0] = n + '0';
		dest[1] = '\0';
	}
	return (dest);
}
