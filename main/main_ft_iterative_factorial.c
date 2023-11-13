/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 03:20:16 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/22 23:17:53 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
printf("resultado %d\n", ft_iterative_factorial(0));
return (0);
}

// int main(void)
// {
// 	int a = 0;
// 	// int b = 5;
	
// 	while(a <= 0) // a>b
// 	{
// 		printf("fatorial de %d: %d\n", a, ft_iterative_factorial(a));
// 		a++;
// 	}
// 	// printf("resultado %d\n", ft_iterative_factorial(3));
// 	return (0);
// }