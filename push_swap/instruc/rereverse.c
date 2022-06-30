/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rereverse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:09:48 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 16:53:33 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_node **a)
{
	t_node	*temp;
	int val;

	val = 0;
	temp = ft_lstlast(*a);
	val = temp->nbr;
	// printf("ultimo valor  %d\n", val);
	temp = init_node(val);
	ft_lstadd_front(a,temp);
	del_lastnode(a);
	write(1,"rra\n",4);

}
void	rrb(t_node **b)
{
	t_node	*temp;
	int val;

	val = 0;
	temp = ft_lstlast(*b);
	val = temp->nbr;

	temp = init_node(val);
	ft_lstadd_front(b,temp);
	del_lastnode(b);
	write(1,"rrb\n",4);
}

void	rrr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1,"rrr\n",4);
}