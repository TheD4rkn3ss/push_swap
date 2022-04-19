/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:31:51 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/04 17:03:08 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_swap(int argc, char **argv)
{
	int			i;
	t_stack		a;
	t_stack		b;

	i = 0;
	init_stack(argc - 1, argc - 1, &a);
	init_stack(0, argc - 1, &b);
	while (i + 1 < argc)
	{
		a.items[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	while (is_sort(&a) != 1)
		sorting(&a, &b);
	free(a.items);
	free(b.items);
}

int	main(int argc, char **argv)
{
	if (check_args(argc, argv) != 0)
		exit(EXIT_FAILURE);
	if (argc == 1 || argc == 2)
		return (0);
	push_swap(argc, argv);
	return (0);
}
