/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:36:03 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/06 21:30:27 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
    int min = 3;
    int max = 8;
    int *array;
    int i;

    array = ft_range(min, max);
    if (array == NULL)
    {
        printf("Intervalo inválido.\n");
        return 1;
    }

    // Imprime os valores do array
    for (i = 0; i < max - min; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(array);

    return 0;
}
*/
