/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nextline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:47:26 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/29 15:39:14 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*get_filebuf(t_list **filebuf, const int fd)
{
	t_list	*current;

	current = *filebuf;
	while (current && (int)(current->content_size) != fd)
		current = current->next;
	if (current)
	{
		if (!(current->content))
			current->content = ft_strnew(1);
		return (current);
	}
	current = ft_lstnew("\0", fd);
	ft_lstadd(filebuf, current);
	current = *filebuf;
	return (current);
}

static int		copy_line(const int r, t_list **filebuf, char **line)
{
	int	len;

	if (r < GNL_BUFF_SIZE && !ft_strlen((char *)((*filebuf)->content)))
		return (0);
	len = (int)ft_strcdup(line, (char *)((*filebuf)->content), '\n');
	if (len + 1 < (int)ft_strlen((char *)((*filebuf)->content)))
	{
		ft_strtrunc((char **)(&((*filebuf)->content)), len + 1,\
				ft_strlen((char *)((*filebuf)->content)) - len);
	}
	else
		ft_strclr((*filebuf)->content);
	return (1);
}

int				ft_get_nextline(const int fd, char **line)
{
	static t_list	*filebuf;
	t_list			*current;
	char			buf[GNL_BUFF_SIZE + 1];
	int				r;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	current = get_filebuf(&filebuf, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	while ((r = read(fd, buf, GNL_BUFF_SIZE)))
	{
		buf[r] = '\0';
		if (!(current->content = ft_strappend(current->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (copy_line(r, &current, line));
}
