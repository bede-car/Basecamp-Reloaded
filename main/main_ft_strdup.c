/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:28:03 by bede-car          #+#    #+#             */
/*   Updated: 2022/05/25 01:28:07 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main (void)
{
    char *cavalinho = "bananinha";
    printf("%p\n", cavalinho);
    printf("%s\n", ft_strdup(cavalinho));
    printf("%p\n", cavalinho);
}