/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:19:59 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/27 15:02:34 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	r;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		r = f(tab[i]);
		if (r == 1)
			count++;
		i++;
	}
	return (count);
}
