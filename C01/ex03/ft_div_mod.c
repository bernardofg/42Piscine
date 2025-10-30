/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:17:52 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/23 23:29:22 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
    int div, mod;
    ft_div_mod(10, 3, &div, &mod);

    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);

    return 0;
}*/
