/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:31:59 by lucferna          #+#    #+#             */
/*   Updated: 2022/03/30 17:32:01 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	j;
	int	hold;

	i = a->size - 1;
	j = a->top;
	hold = a->items[a->top];
	if (a->size < 2)
		return ;
	while (i != 0)
	{
		a->items[j] = a->items[j + 1];
		j++;
		i--;
	}
	a->items[j] = hold;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int	i;
	int	j;
	int	hold;

	i = b->size - 1;
	j = b->top;
	hold = b->items[b->top];
	if (b->size < 2)
		return ;
	while (i != 0)
	{
		b->items[j] = b->items[j + 1];
		j++;
		i--;
	}
	b->items[j] = hold;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	hold;

	i = a->size - 1;
	j = a->top;
	hold = a->items[a->top];
	while (i != 0 && a->size >= 2)
	{
		a->items[j] = a->items[j + 1];
		j++;
		i--;
	}
	a->items[j] = hold;
	i = b->size - 1;
	j = b->top;
	hold = b->items[b->top];
	while (i != 0 && b->size >= 2)
	{
		b->items[j] = b->items[j + 1];
		j++;
		i--;
	}
	b->items[j] = hold;
	write(1, "rr\n", 3);
}

void	rra(t_stack *a)
{
	int	i;
	int	hold;

	i = a->size - 1;
	hold = a->items[i];
	if (a->size < 2)
		return ;
	while (i != 0)
	{
		a->items[i] = a->items[i - 1];
		i--;
	}
	a->items[i] = hold;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	i;
	int	hold;

	i = b->size - 1;
	hold = b->items[i];
	if (b->size < 2)
		return ;
	while (i != 0)
	{
		b->items[i] = b->items[i - 1];
		i--;
	}
	b->items[i] = hold;
	write(1, "rrb\n", 4);
}
