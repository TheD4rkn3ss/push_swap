/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:31:56 by lucferna          #+#    #+#             */
/*   Updated: 2022/03/30 17:31:57 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack *a)
{
	int	hold;

	if (a->size <= 1)
		return ;
	hold = a->items[a->top];
	a->items[a->top] = a->items[a->top + 1];
	a->items[a->top + 1] = hold;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	hold;

	if (b->size <= 1)
		return ;
	hold = b->items[b->top];
	b->items[b->top] = b->items[b->top + 1];
	b->items[b->top + 1] = hold;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	hold;

	if (a->size > 1)
	{
		hold = a->items[a->top];
		a->items[a->top] = a->items[a->top + 1];
		a->items[a->top + 1] = hold;
	}
	if (b->size > 1)
	{
		hold = b->items[b->top];
		b->items[b->top] = b->items[b->top + 1];
		b->items[b->top + 1] = hold;
	}
	write(1, "ss\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int	i;
	int	*hold;

	if (b->size == 0)
		return ;
	i = 0;
	hold = ft_intdup(a->items, a->size);
	free(a->items);
	init_stack(a->size + 1, a->max_size, a);
	a->items[i++] = b->items[b->top];
	while (i < a->size)
	{
		a->items[i] = hold[i - 1];
		i++;
	}
	free(hold);
	hold = ft_intdup(b->items + 1, b->size - 1);
	free(b->items);
	init_stack(b->size - 1, b->max_size, b);
	i = -1;
	while (++i < b->size)
		b->items[i] = hold[i];
	free(hold);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;
	int	*hold;

	if (a->size == 0)
		return ;
	i = 0;
	hold = ft_intdup(b->items, b->size);
	free(b->items);
	init_stack(b->size + 1, b->max_size, b);
	b->items[i++] = a->items[a->top];
	while (i < b->size)
	{
		b->items[i] = hold[i - 1];
		i++;
	}
	free(hold);
	hold = ft_intdup(a->items + 1, a->size - 1);
	free(a->items);
	init_stack(a->size - 1, a->max_size, a);
	i = -1;
	while (++i < a->size)
		a->items[i] = hold[i];
	free(hold);
	write(1, "pb\n", 3);
}
