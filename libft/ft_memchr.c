/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:45:51 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/02 10:45:51 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_h;

	str_h = (unsigned char *)str;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*str_h == (unsigned char) c)
			return (str_h);
		str_h++;
	}
	if (c == '\0' && *str_h == '\0')
		return (str_h);
	return (NULL);
}
