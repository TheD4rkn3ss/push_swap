/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:32:39 by lucferna          #+#    #+#             */
/*   Updated: 2022/03/30 17:32:50 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	three_sort(t_stack *a)
{
	if (a->size == 2)
		return (sa(a));
	if (a->items[0] > a->items[1])
	{
		if (a->items[1] > a->items[2])
		{
			sa(a);
			rra(a);
		}
		else
			sa(a);
	}
	else if (a->items[0] < a->items[1])
	{
		if (a->items[0] > a->items[2])
			rra(a);
		else
		{
			rra(a);
			sa(a);
		}
	}
}

void	five_sort(t_stack *a, t_stack *b)
{
	while (1)
	{
		if (is_sort(a) == 2)
			break ;
		if (a->size == 1)
			break ;
		if (a->size > 1 && a->items[0] < a->items[1])
			pb(a, b);
		else
			sa(a);
	}
	while (1)
	{
		if (b->size == 1)
		{
			pa(a, b);
			break ;
		}
		if (b->size > 1 && b->items[0] < b->items[1])
			sb(b);
		else
			pa(a, b);
		if (a->size > 1 && a->items[0] > a->items[1])
			sa(a);
	}
}

void	b_three_sort(t_stack *b)
{
	if (b->size == 2)
		return (sb(b));
	if (b->items[0] > b->items[1])
	{
		if (b->items[1] > b->items[2])
		{
			sb(b);
			rrb(b);
		}
		else
			sb(b);
	}
	else if (b->items[0] < b->items[1])
	{
		if (b->items[0] > b->items[2])
			rrb(b);
		else
		{
			rrb(b);
			sb(b);
		}
	}
}
