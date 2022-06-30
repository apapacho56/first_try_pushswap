/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:11:06 by aparedes          #+#    #+#             */
/*   Updated: 2022/06/22 19:42:13 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	ini;
	size_t	counter;

	if (!s)
		return (NULL);
	ini = start;
	counter = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	buffer = (char *)malloc(len +1);
	if (!s || !buffer)
		return (NULL);
	while (ini < ft_strlen(s) && counter < len)
	{
		buffer[counter] = s[ini];
		counter ++;
		ini ++;
	}
	buffer[counter] = '\0';
	return (buffer);
}
