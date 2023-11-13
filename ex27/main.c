/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:57:39 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/29 00:45:58 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_display_file.h"

int	main(int argc, char **argv)
{
	int	idnt;

	if (argc != 2)
		ft_error(argc);
	else
	{
		idnt = open(argv[1], O_RDONLY);
		if (idnt == -1)
		{
			ft_putstr (2, "No such file.\n");
			return (0);
		}
		else
		{
			ft_display(idnt);
			return (0);
		}
	}
}
