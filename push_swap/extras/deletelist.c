/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deletelist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:30:50 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/25 15:38:55 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	deleteList(t_node **head_ref)
{
   /* deref head_ref to get the real head */
	t_node *current = *head_ref;
	t_node *next;

	current = *head_ref;
	while (current != NULL) 
	{
		next = current->next;
		free(current);
		current = next;
	}
    
   /* deref head_ref to affect the real head back
      in the caller. */
	*head_ref = NULL;
}

void	del_firstnode(t_node **head)
{
	t_node	*temp;

	if (!head)
		return ;
    temp = *head;    
    *head = (*head)->next;
    free(temp);
}

void	del_lastnode(t_node **head)
{
    t_node	*temp;
    t_node	*previous;
    
	temp = *head;
    // if there are no nodes in Linked List can't delete
    if(*head == NULL){
        return;
    }
    
    // if Linked List has only 1 node
    if(temp->next == NULL)
	{
        *head = NULL;
        return;
    }
    
    // else traverse to the last node
    while (temp->next != NULL) 
    {
        // store previous link node as we need to change its next val
        previous = temp; 
        temp = temp->next; 
    }
    // Curr assign 2nd last node's next to Null
    previous->next = NULL;
    // delete the last node
    free(temp);
    // 2nd last now becomes the last node
}
