/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:41 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/02 10:46:42 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	total;

	total = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[total] && total < size - 1)
		{
			dest[total] = src[total];
			total++;
		}
		dest[total] = '\0';
		while (src[total])
			total++;
		return (total);
	}
}
