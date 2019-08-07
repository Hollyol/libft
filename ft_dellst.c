/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:17:22 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 16:17:24 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dellst(t_list **alst)
{
	t_list	*current;

	if (!alst)
		return ;
	while ((*alst) != NULL)
	{
		current = *alst;
		*alst = (*alst)->next;
		free(current->content);
		current->content_size = 0;
		free(current);
	}
}
