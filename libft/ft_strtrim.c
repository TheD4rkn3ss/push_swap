/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:47:01 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/06 11:53:46 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trim(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_trim(set, s1[start]))
		start++;
	while (s1[end - 1] && is_trim(set, s1[end - 1]) && end > start)
		end--;
	new = (char *)malloc((end - start + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[start], end - start + 1);
	return (new);
}
