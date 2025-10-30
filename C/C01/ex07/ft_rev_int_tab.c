/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:56:37 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/23 23:28:02 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	size = size - 1;
	i = 0;
	while (i <= size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int     main(void)
{
        int     tab[] = {1, 2, 3, 4, 5};
        int     size = sizeof(tab) / sizeof(tab[0]);

        ft_rev_int_tab(tab, size);

        for (int i = 0; i < size; i++)
                printf("%d ", tab[i]);
        return 0;
}
*/
