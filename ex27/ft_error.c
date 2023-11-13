/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:42:24 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/29 00:47:03 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_display_file.h"

void	ft_error(int argc)
{
	if (argc < 2)
	{
		ft_putstr (2, "File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr (2, "Too many arguments.\n");
	}
}
