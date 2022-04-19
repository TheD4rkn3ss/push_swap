/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:32:42 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/17 00:15:51 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(const char *str)
{
	long	nb;
	int		neg;

	nb = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (nb * neg);
}

int	find_smaller(t_stack *a)
{
	int	i;
	int	nb;

	i = 0;
	nb = a->items[i];
	while (i < a->size)
	{
		if (a->items[i] < nb)
			nb = a->items[i];
		i++;
	}
	return (nb);
}

int	is_present(int nb, int *arr, int arr_size)
{
	int	i;

	i = 0;
	while (i < arr_size)
	{
		if (arr[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	next_value(t_stack *a, int *group, int group_size)
{
	int	i;
	int	trigger;
	int	n_value;

	i = 0;
	trigger = 0;
	n_value = group[group_size - 1];
	while (i < a->size)
	{
		if (a->items[i] > n_value && trigger == 0)
		{
			trigger = 1;
			n_value = a->items[i];
		}
		if (a->items[i] < n_value && trigger == 1)
		{
			if (!is_present(a->items[i], group, group_size))
				n_value = a->items[i];
		}
		i++;
	}
	return (n_value);
}

int	*create_group(t_stack *a)
{
	int	i;
	int	size;
	int	*group;

	i = 0;
	if (a->size <= 100)
		size = 13;
	else
		size = 26;
	if (size > a->size)
		size = a->size;
	group = malloc(size * sizeof(int));
	group[i] = find_smaller(a);
	while (++i < size)
		group[i] = next_value(a, group, i);
	return (group);
}
