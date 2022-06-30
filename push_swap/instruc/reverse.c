/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:05:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 16:54:03 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_node **a)
{
	t_node	*temp;
	int val;

	val = 0;
	val = (*a)->nbr;
	temp = init_node(val);
	ft_lstadd_back(a,temp);
	del_firstnode(a);
	write(1,"ra\n",3);
}

void	rb(t_node **b)
{
	t_node	*temp;
	int val;

	val = 0;
	val = (*b)->nbr;
	temp = init_node(val);
	ft_lstadd_back(b, temp);
	del_firstnode(b);
	write(1,"rb\n",3);


}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1,"rr\n",3);

}