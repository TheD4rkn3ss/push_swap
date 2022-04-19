/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:32:03 by lucferna          #+#    #+#             */
/*   Updated: 2022/03/30 17:32:04 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stack(int size, int max_size, t_stack *stack)
{
	stack->size = size;
	stack->top = 0;
	stack->max_size = max_size;
	if (size == 0)
		stack->items = malloc(1 * sizeof(int));
	else
		stack->items = malloc(size * sizeof(int));
	if (!stack->items)
		write(1, "Error\n", 6);
}

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN
			|| ft_strncmp("--", argv[i], 2) == 0)
			return (write(1, "Error\n", 6));
		while ((size_t)j < ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]) && ft_strncmp("-", argv[i], 1) != 0)
				return (write(1, "Error\n", 6));
			j++;
		}
		j = i;
		while (++j < argc)
		{
			if (!ft_strncmp(argv[i], argv[j], 10))
				return (write(1, "Error\n", 6));
		}
		i++;
	}
	return (0);
}

int	is_sort(t_stack *a)
{
	int	max;
	int	i;
	int	j;

	max = a->size;
	i = 0;
	while (max-- != 0)
	{
		j = i;
		while (j != a->size)
		{
			if (a->items[a->top + i] > a->items[a->top + j])
				return (0);
			j++;
		}
		i++;
	}
	if (a->max_size != a->size)
		return (2);
	return (1);
}

int	*ft_intdup(int *nb, int size)
{
	int	*new;
	int	i;

	i = 0;
	if (size <= 0)
		new = malloc(1 * sizeof(int));
	else
		new = malloc(size * sizeof(int));
	if (new)
	{
		while (i < size)
		{
			new[i] = nb[i];
			i++;
		}
	}
	return (new);
}

void	sorting(t_stack *a, t_stack *b)
{
	if (is_sort(a) == 1)
		return ;
	if (a->size <= 3)
		return (three_sort(a));
	if (a->size <= 5)
	{
		while (is_sort(a) != 1)
			five_sort(a, b);
		return ;
	}
	while (a->size != 0)
		first_sort(a, b);
	while (b->size != 0)
		second_sort(a, b);
}
