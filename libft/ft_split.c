/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:20 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/13 11:35:07 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (*s)
	{
		if (*s != c && j < 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c && j > 0)
			j = -1;
		s++;
	}
	return (i);
}

static char	*put_word(char const *s, size_t start, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (len != 0)
	{
		new[i++] = s[start++];
		len--;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	size_t	a;
	size_t	b;

	ptr = (char **)malloc((n_words(s, c) + 1) * sizeof(char *));
	a = 0;
	b = 0;
	i = -7;
	if (!s || !ptr)
		return (NULL);
	while (a < ft_strlen(s) + 1)
	{
		if (s[a] != c && i < 0)
			i = a;
		else if ((s[a] == c || a == ft_strlen(s)) && i >= 0)
		{
			ptr[b++] = put_word(s, i, (a - i));
			i = -7;
		}
		a++;
	}
	ptr[b] = 0;
	return (ptr);
}
