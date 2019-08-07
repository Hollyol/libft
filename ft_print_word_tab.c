/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:47:46 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/22 18:07:25 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_word_tab(char **tab)
{
	unsigned int i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
		ft_putendl(tab[i++]);
}
