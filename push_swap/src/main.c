/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:00:44 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/25 16:51:13 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int main(int argc, char *argv[])
{
	push_swap(argc, argv);
	// system("leaks push_swap");
	return 0;
}

