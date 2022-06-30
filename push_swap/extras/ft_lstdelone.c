/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:20:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/24 14:19:15 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_lstdelone (t_node *before_del)
{
    t_node *temp;
    temp = before_del->next;
    before_del->next = temp->next;
    free(temp);
}
