/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:23:55 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/22 01:54:14 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	a = 2;
	b = 5;
	printf("a = %d e b = %d\n", a, b);
	ft_swap(&a,&b);
	printf("a = %d e b = %d\n", a, b);
	return (0);	
}	
