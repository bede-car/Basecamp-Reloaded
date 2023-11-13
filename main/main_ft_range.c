/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:30:24 by bede-car          #+#    #+#             */
/*   Updated: 2022/08/27 16:38:41 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i;
	i = 0;
	int *p;
	int min;
	int max;
	min = -8;
	max = 10;
	if(min > max)
	printf("%p\n", NULL);
	
	p =  ft_range(min, max);
	while(i < (max - min))
	{
		printf("%d\n", p[i]);
		i++;	
	}
	return (0);
}