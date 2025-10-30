/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:27:42 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/23 23:29:57 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main()
{
    int a = 42;
    int b = 5;

    printf("Antes da função:\n");
    printf("a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("\nDepois da função:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/
