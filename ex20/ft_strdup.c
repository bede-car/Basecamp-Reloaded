/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 03:01:10 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/26 03:37:52 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	c = (char *) malloc(i + 1);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}	
	c[i] = '\0';
	return (c);
}
