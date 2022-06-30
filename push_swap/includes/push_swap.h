/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:58:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/29 16:06:40 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

#define LIMIT ' '

typedef struct 	s_node
{
	int 			nbr;
	struct s_node	*next;
}		t_node;

typedef struct 	s_counter
{
	int 		count_a;
	int 		mid_num_a;
	int			i;
	int 		count_b;
	int 		mid_num_b;
	int 		max_num;
}		t_counter;

t_node	*split_arg(int n_arg, char **arg);
void	push_swap(int n_arg, char **argv);


void	printList(t_node *a);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
t_node	*init_node(int num);
void	deleteList(t_node **head_ref);
void	del_firstnode(t_node **node);
void	ft_lstdelone(t_node *lst);
void	del_lastnode(t_node **head);
t_node	*ft_lstlast(t_node *lst);
t_node	*first_node(t_node *node);
t_node	*find_node(t_node *node, int max);




// Libft functions
char	**ft_split(char *s, char c);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(char *s1);
void	*ft_memcpy(void *dst, void *src, size_t n);

// Instrucctions
void	sa(t_node **b);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	pa(t_node **b, t_node **a);

//Algorithm
// void	sorting_atob(t_node **a, t_node **b, int n_arg);
// void	sorting_btoa(t_node **a, t_node **b, int n_arg);
// void	compare_atob(t_node **a, t_node **b, int c1);
// void	compare_btoa(t_node **a, t_node **b, int c1);
// void	comparing_each(t_node **a,t_node **b, int n_arg);
// void	compare_a(t_node **a, int count);
// void	comparison_try(t_node **a, int count);
// void	ordering(t_node **a, int limit, int c1);

//Algorithm V2.0
void	sort(t_node **a,t_node **b,int args);
int		find_mid_a(t_node **a, int count);
int		find_mid_b(t_node **b, int count);
int		find_max(t_node **a);
int		find_min(t_node **a);
void	divider(t_node **a, t_node **b, t_counter *c, int args);
void	divider2(t_node **a, t_node **b, t_counter *c, int args);
void	orderval(t_node **a);
void	sort2(t_node **a,t_node **b);











#endif