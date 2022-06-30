/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:37:37 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/22 19:41:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strchr(char *s, int c)
{
	int		counter;

	counter = 0;
	while (counter < (int)ft_strlen(s) + 1)
	{
		if (*(s + counter) == (char)c)
			return ((char *)s + counter);
		counter ++;
	}
	return (NULL);
}