/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:34:56 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/02 14:28:52 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	c;

	c = 0;
	while (c <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		c++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int tab[] = {5, 32, 2, 3, -5, -2, 0, 3, 8, 1, 2};
    int size = 11;

    ft_sort_int_tab(tab, size);

    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
*/
