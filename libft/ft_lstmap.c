/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:20:59 by lucferna          #+#    #+#             */
/*   Updated: 2021/09/14 16:49:40 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*i;
	t_list	*j;

	new = ft_lstnew(f(lst->content));
	i = lst->next;
	if (new)
	{
		while (i)
		{
			j = ft_lstnew(f(i->content));
			if (!j)
			{
				del(i);
				return (NULL);
			}
			ft_lstadd_back(&new, j);
			i = i->next;
		}
		return (new);
	}
	else
		return (NULL);
}
