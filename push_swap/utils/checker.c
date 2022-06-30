/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:08:37 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/24 13:02:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*init_node(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (0);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void printList(t_node *a)
{
    t_node *temp;

	temp = a;
    printf("____________\n");

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
        printf("%d	\n", temp->nbr);
        temp = temp->next;
    }
}

t_node	*split_arg(int n_arg, char **arg)
{
	int			i;
	char		**buff;
	int			val;
	t_node		*node;

	node = NULL;
	// temp = NULL;
	i = 1;
	val = 0;
	buff = NULL;
	if (n_arg == 2)
	{
		buff = ft_split(arg[i], LIMIT);
		i = 0;
		while (buff[i])
		{
			val = atoi(buff[i]);
			// temp = init_node(val);
			ft_lstadd_back(&node, init_node(val));
			free(buff[i]);
			i++;
		}
		free(buff);
		return (node);
	}
	return (node);
}