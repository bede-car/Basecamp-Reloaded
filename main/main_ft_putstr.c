/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:10:03 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/23 01:21:00 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str);

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

int main(void)
{
	ft_putstr("BIA");
	return (0);
}
