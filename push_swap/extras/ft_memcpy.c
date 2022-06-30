/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/22 19:41:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	counter;
	char	*assign_dst;
	char	*assign_src;

	if ((dst == src) || n == 0)
		return (dst);
	assign_dst = dst;
	assign_src = (char *)src;
	counter = 0;
	while (counter < n)
	{
		*(assign_dst + counter) = *(assign_src + counter);
		counter ++;
	}
	return (dst);
}
