/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:22:29 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/29 00:39:04 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_display_file.h"

void	ft_display(int idnt)
{
	int		r;
	char	buffer[11];

	buffer[10] = '\0';
	while (1)
	{
		r = read(idnt, buffer, 10);
		if (r == 10)
		{
			ft_putstr(1, buffer);
			continue ;
		}
		else
		{
			buffer[r] = '\0';
			ft_putstr (1, buffer);
			break ;
		}
	}
	close(idnt);
}
