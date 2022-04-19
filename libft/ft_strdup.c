/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:27 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/02 10:46:28 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	size;
	int		i;

	i = 0;
	size = ft_strlen(s) + 1;
	new = malloc(size * sizeof(char));
	if (new)
	{
		while (s[i])
		{
			new[i] = s[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
