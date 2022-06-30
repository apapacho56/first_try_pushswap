/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:44:23 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 16:54:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_node **a)
{
	int	temp;

	if (!(*a))
		return ;
	if ((*a)->next == NULL || !((*a)->nbr))
		return ;
	temp = (*a)->nbr;
	(*a)->nbr = (*a)->next->nbr;
	(*a)->next->nbr = temp;
	write(1,"sa\n",3);
}

void	sb(t_node **b)
{
	int	temp;

	temp = 0;
	if (!(*b))
	return ;
	if ((*b)->next == NULL || !((*b)->nbr))
		return ;
	temp = (*b)->nbr;
	(*b)->nbr = (*b)->next->nbr;
	(*b)->next->nbr = temp;
	write(1,"sb\n",3);

}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
	printf("ss");
}
