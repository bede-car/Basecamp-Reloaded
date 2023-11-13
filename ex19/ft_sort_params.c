/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:57:45 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/26 03:09:58 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0 ;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (dif = s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_print_params(int argc, char *argv[])
{
	int	j;
	int	i;

	j = 1;
	while (argc > 1)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		argc--;
	}
}

int	main(int argc, char **argv)
{
	int	fix;
	int	altr;

	fix = 1;
	altr = 2;
	while (argc > fix)
	{	
		while (argc > altr)
		{
			if (ft_strcmp(argv[fix], argv[altr]) > 0)
				ft_swap(&argv[fix], &argv[altr]);
			altr++;
		}
		fix++;
		altr = fix;
	}	
	ft_print_params(argc, argv);
	return (0);
}
