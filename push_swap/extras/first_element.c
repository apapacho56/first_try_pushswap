/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_element.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:54:00 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/27 22:07:19 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*first_node(t_node *node) 
{
  t_node * current = node;

  while (current->next != NULL)
  {
  	current = current->next;
  }
  return(current);
}
t_node	*find_node(t_node *node, int max)
{
	t_node * current = node;

	while (current->next != NULL)
	{
		if (current->nbr == max)
			return (current);
		current = current->next;
	}
	return(current);
}