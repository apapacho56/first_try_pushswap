/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:04:35 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 17:00:00 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*temp;
	int val;

	if((*a) ==  NULL)
		return;
	val = 0;
	val = (*a)->nbr;
	temp = init_node(val);
	ft_lstadd_front(b,temp);
	del_firstnode(a);
	write(1,"pb\n",3);
}
void	pa(t_node **a, t_node **b)
{
	t_node	*temp;
	int val;

	val = 0;
	if((*b) ==  NULL)
		return;
	val = (*b)->nbr;
	temp = init_node(val);
	ft_lstadd_front(a,temp);
	del_firstnode(b);
	write(1,"pa\n",3);
}