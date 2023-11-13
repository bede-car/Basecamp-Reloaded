/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:19:55 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/28 21:38:46 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr(int nbr)
{
	// nbr = 0;
	// while ( nbr <= 9)
	// {
	printf("%d\n", nbr);
	// nbr++;	
	// }
}

int main(void)
{
	int tab[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(tab, 9, &ft_putnbr);
	return (0);
}

//(*f)(tab[i]);
//f(tab[i]);