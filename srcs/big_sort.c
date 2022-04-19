/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:11:36 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/17 15:40:00 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	repeat_func(t_stack *a, t_stack *b, int n_times)
{
	int	i;

	i = n_times;
	while (n_times-- != 0)
		rb(b);
	pa(a, b);
	while (i-- != 0)
	{
		if (find_big(b) == 0)
			pa(a, b);
		if (find_big(b) <= 4)
			repeat_func(a, b, find_big(b));
		rrb(b);
		if (find_big(b) == 0)
			pa(a, b);
	}
}

int	find_big(t_stack *b)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	j = 0;
	value = b->items[0];
	while (i < b->size)
	{
		if (b->items[i] > value)
		{
			value = b->items[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	first_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	*group;

	if (a->size <= 100)
		j = 13;
	else
		j = 26;
	group = create_group(a);
	if (j > a->size)
		j = a->size;
	i = j;
	while (j != 0)
	{
		if (is_present(a->items[0], group, i))
		{
			pb(a, b);
			j--;
		}
		else
			ra(a);
	}
	free(group);
	return (i);
}

void	second_sort(t_stack *a, t_stack *b)
{
	int	nb;
	int	rnb;

	nb = find_big(b);
	if (nb == 0)
		pa(a, b);
	else
	{
		rnb = nb;
		while (nb-- != 0)
			rb(b);
		pa(a, b);
		while (rnb-- != 0)
		{
			if (find_big(b) == 0)
				pa(a, b);
			if (find_big(b) <= 8)
				repeat_func(a, b, find_big(b));
			rrb(b);
			if (find_big(b) == 0)
				pa(a, b);
		}
	}
}
