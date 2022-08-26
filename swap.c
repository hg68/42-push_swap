/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:35:02 by hgill             #+#    #+#             */
/*   Updated: 2022/08/25 16:59:54 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(long *stack_a, int *numbers_in_stack_a)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (numbers_in_stack_a > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	free(temp);
	write(1, "sa\n", 3);
}

void	sb(long *stack_b, int *numbers_in_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (numbers_in_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "sb\n", 3);
}

void	ss(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (numbers_in_stack_a > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	if (numbers_in_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "ss\n", 3);
}
