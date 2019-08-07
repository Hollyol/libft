/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:31:50 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/19 11:41:43 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_skip_whitespaces(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||\
					str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
			return (i);
		i++;
	}
	return (str[i] != '\0');
}

int			ft_atoi(const char *str)
{
	int i;
	int res;
	int neg;

	i = atoi_skip_whitespaces(str);
	res = 0;
	neg = 0;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i++] - '0';
	}
	if (neg)
		res *= -1;
	return (res);
}
