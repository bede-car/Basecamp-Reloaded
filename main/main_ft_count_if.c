/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_count_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:20:02 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/28 21:04:55 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_count_if(char **tab, int(*f)(char*));

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	char *tab[] = {"B","V","a",NULL}; //'\0'
	printf("%d\n",ft_count_if(tab,&ft_strlen));
	return (0);
}