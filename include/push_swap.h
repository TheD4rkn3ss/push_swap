/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:11:22 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/13 21:11:23 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack {
	int	size;
	int	max_size;
	int	top;
	int	*items;
}				t_stack;

int		check_args(int argc, char **argv);
long	ft_atol(const char *str);
void	init_stack(int size, int max_size, t_stack *stack);
int		*ft_intdup(int *nb, int size);
int		is_sort(t_stack *a);
void	sorting(t_stack *a, t_stack *b);
int		ft_isprime(int nb);
void	three_sort(t_stack *a);
void	five_sort(t_stack *a, t_stack *b);
int		*create_group(t_stack *a);
int		next_value(t_stack *a, int *group, int group_size);
int		is_present(int nb, int *arr, int arr_size);
int		find_smaller(t_stack *a);
int		ft_isprime(int nb);
int		find_big(t_stack *b);
int		first_sort(t_stack *a, t_stack *b);
void	second_sort(t_stack *a, t_stack *b);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);

#endif
