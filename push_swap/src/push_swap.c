/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:46:41 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 17:40:40 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int n_arg, char **argv)
{
	t_node	*b;
	t_node	*a;
	// t_node	*temp;
	int		val;
	int		i;

	i = 1;
	val = 0;
	a = NULL;
	b = NULL;
	if (n_arg == 1)
		return ;
	if (n_arg == 2)
		a = split_arg(n_arg, argv); // return the 2nd arg splitted 
	if (n_arg > 2)
	{
		while (i < n_arg)
		{
			val= atoi(argv[i++]);
			ft_lstadd_back(&a, init_node(val));
		}
	}
	printList(a);
	sort(&a, &b, n_arg);
	// printList(b);
	// sorting_atob(&a, &b, n_arg);
	// sorting_atob(&a, &b, n_arg);

	// comparing_each(&a, &b, n_arg);
	// sorting_btoa(&a, &b, n_arg);
	/* TEST to run the instructions */
/* 	printf("___original___");
	printList(a);
	printList(b);
	
	printf("___original pb pb pb___");
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);

	printList(a);
	printList(b);
	printf("___original pa___");
	pa(&a, &b);
	printList(a);
	printList(b);
	printf("\n___original ra___");
	ra(&a);
	rb(&b);
	rr(&a,&b);


	printList(a);
	printList(b);

	printf("\n___original ss___");
	// sa(&a);
	// sb(&b);
	ss(&a,&b);
	printList(a);
	printList(b);
	printf("\n___original rra___");
	rra(&a);
	rrb(&b);
	printList(a);
	printList(b); */

/* FUNCTIONS TO CLEAN THE LEAKS (LISTS) */
	deleteList(&a);
	deleteList(&b);
}