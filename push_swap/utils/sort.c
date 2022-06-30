/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:27:40 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 17:49:55 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init(t_counter *count)
{
	count->count_a = 0;
	count->mid_num_a = 0;
	count->i = 0;
	count->count_b = 0;
	count->mid_num_b = 0;
	count->max_num = 0;
}

int	num_num(t_node **a)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i + 1); //because it stops in 11 position
}

int	find_mid_a(t_node **a, int count)
{
	int 	i;
	int		mid;
	t_node	*temp;

	temp = *a;
	mid = 0;
	i = temp->nbr;
	while (temp->next != NULL)
	{
		// printf("  a: %d\n", (temp)->nbr);

		temp = temp->next;
		i = temp->nbr + i;
	}
	// printf("\n i : %d\n", i);
	
	mid = i / count ;
	return (mid);
}

int	find_max(t_node **node)
{
	t_node	*temp;
	int		i;

	temp = *node;
	i = temp->nbr; // a la cabeza
	while (temp->next != NULL)
	{
		if(i < temp->next->nbr)
			i = temp->nbr;
		temp = temp->next;
	}
	return (i);
}

int	find_min(t_node **a)
{
	t_node	*temp;
	int		i;

	temp = *a;
	i = 0;
	while (temp->next != NULL)
	{
		if(temp->nbr < temp->next->nbr)
			i = temp->nbr;
		temp = temp->next;
	}
	return (i);
}

void	divider(t_node **a, t_node **b, t_counter *c, int args)
{
	t_node *temp;
	temp = *a;
	c->i = args;
	while (c->i)
	{
		c->count_a = num_num(a);
		c->mid_num_a = find_mid_a(a,(int)c->count_a);
		while (c->i)
		{
			if ((*a)->nbr < c->mid_num_a)
				pb(a,b);
			else
				ra(a);
			c->i--;
		}
	}

	if (num_num(a) > 2 )
		divider(a, b, c, args);
	else if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
	else
		return ;
}

void	divider2(t_node **a, t_node **b, t_counter *c, int args)
{
	t_node *temp;
	temp = *b;
	c->i = args;
	while (c->i)
	{
		c->count_b = num_num(b);
		c->mid_num_b = find_mid_a(b,(int)c->count_b);
		while (c->i)
		{
			if ((*b)->nbr > c->mid_num_b)
			{
				pa(a,b);
			}
			else
				rb(b);
			c->i--;
		}
	}
	// printf("\n num num: %d\n", num_num(b));
	if (num_num(b) > 2 )
		divider2(a, b, c, args);
	else if ((*b)->nbr < (*b)->next->nbr)
		sb(b);
	else
		return ;
}

/* ordenar tres valores  */
void	orderval(t_node **a)
{
	int	bottom;

	bottom = find_min(a);
	while ((*a)->nbr != bottom) 
	{
		if ((*a)->nbr < (*a)->next->nbr)
				sa(a);
		else
		 		ra(a);
	}
}

void	sort2(t_node **a,t_node **b)
{	
	while ((*b) != NULL)
	{
		if((*b)->nbr == find_max(b))
			pa(a,b);
		else
			rrb(b);
	}
	// printList(*a);
}

void	sort(t_node **a,t_node **b, int args)
{
	t_counter	*count;

	count = NULL;
	count = (t_counter *)malloc(sizeof(t_counter));
	init(count);
	if ((*a) != NULL && (*b) == NULL)
	{
		count->count_a = num_num(a);
		count->mid_num_a = find_mid_a(a,(int)count->count_a);
		count->i = args * 2; // hacemos esto para poder pasar por cada unode los elementos 
		while (count->i)
		{
			if ((*a)->nbr < count->mid_num_a)
			{
				pb(a,b);
			}
			else
				ra(a);
			count->i--;
		}
	}
	count->max_num = find_max(a);
	count->i = args;
	/* hacer esto recursivo */
	divider(a, b, count, args);
	sort2(a, b);
	// divider2(a, b, count, args);
	// printList(*a);
	// printList(*b);
}

