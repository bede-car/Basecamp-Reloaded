/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:29:00 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/26 02:50:37 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*m;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	m = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		m[i] = min;
		i++;
		min++;
	}
	return (m);
}
