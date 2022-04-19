/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:45:55 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/02 10:45:56 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*comp1;
	unsigned char		*comp2;
	size_t				i;

	comp1 = (unsigned char *)s1;
	comp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (comp1[i] != comp2[i])
			return ((int)(comp1[i] - comp2[i]));
		if (n == 0)
			return ((int)n);
		i++;
	}
	return (0);
}
