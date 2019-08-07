/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:37:58 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/22 18:24:02 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	split_skip_separator(char const *s, char c, int *i)
{
	while (s[*i] != '\0' && s[*i] == c)
		(*i)++;
	return (s[*i] == '\0');
}

static int	split_count_words(char const *s, char c)
{
	int i;
	int count;

	count = 1;
	i = 0;
	split_skip_separator(s, c, &i);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (split_skip_separator(s, c, &i))
				return (count);
			count++;
			i--;
		}
		i++;
	}
	return (count);
}

static char	*split_dup_word(char const *s, char c, int *i)
{
	int		j;
	char	*dest;
	int		next_i;

	if (split_skip_separator(s, c, i))
		return (NULL);
	j = 0;
	while (s[*i + j] != '\0' && s[*i + j] != c)
		j++;
	if (!(dest = (char *)malloc((j + 1) * sizeof(char))))
		return (NULL);
	dest[j] = '\0';
	next_i = *i + j;
	while (j-- > 0)
		dest[j] = s[*i + j];
	*i = next_i;
	return (dest);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	int		word_id;
	int		i;
	char	**splitted;

	if (!s)
		return (NULL);
	nb_words = split_count_words(s, c);
	if (!(splitted = (char **)malloc((nb_words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	word_id = 0;
	while (word_id < nb_words)
		splitted[word_id++] = split_dup_word(s, c, &i);
	splitted[word_id] = NULL;
	return (splitted);
}
