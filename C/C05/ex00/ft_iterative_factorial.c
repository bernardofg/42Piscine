/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:42:41 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:42:45 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    int num = 20;
    int fact = ft_iterative_factorial(num);
    printf("Fatorial %d %d\n", num, fact);
    return 0;
}
*/
/*factorial: if (nb = 5) = ( 5 - 1) * 5 = 4 * 5......
	5 = 5*4*3*2*1 = 120;
*/
