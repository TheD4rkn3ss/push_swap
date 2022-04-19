/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:18:13 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/16 15:38:18 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*h;
	t_list	*i;

	if (lst)
	{
		h = *lst;
		while (h)
		{
			i = h->next;
			del(h->content);
			free(h);
			h = i;
		}
		*lst = NULL;
	}
}
